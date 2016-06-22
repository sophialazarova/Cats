var frameModule = require('ui/frame');
var observableModule = require('data/observable');
var listviewModule = require('nativescript-telerik-ui/listview');
var observableArrayModule = require('data/observable-array');
var timer = require('timer');

var model = new observableModule.Observable();
model.reddit = new observableArrayModule.ObservableArray([]);
var urlData = {url:'https://www.reddit.com/r/lolcats.json?after=', after: undefined};
var drawer;
var listview;

exports.loaded = function(args) {
    page = args.object;
    page.bindingContext = model;

    drawer = page.getViewById('drawer');
    listview = page.getViewById('lv');

    if (model.reddit.length == 0){
        loadItems(urlData);
    }
};
function loadItems(dataFeed) {
    fetch(dataFeed.url + dataFeed.after)
    .then(function(response) {
        return response.json();
    })
    .then(function(response) {
        dataFeed.after = response.data.after;
        response.data.children.forEach(function(item) {
            if (item.data.url.match(/.jpg/)) {
                model.reddit.splice(0,0,{
                    title: item.data.title,
                    url: item.data.url,
                });
            }
        });
    });
};

exports.loadMoreItems = function(args) {
    timer.setTimeout(function() {
    loadItems(urlData);
    listview.notifyPullToRefreshFinished();
    },300);
};

exports.linearChosen = function() {
    var layout = new listviewModule.ListViewLinearLayout();
    listview.listViewLayout = layout;
    drawer.closeDrawer();
};

exports.gridChosen = function() {
    var layout = new listviewModule.ListViewGridLayout();
    layout.spanCount = 2;
    layout.itemHeight = 270;
    listview.listViewLayout = layout;
    drawer.closeDrawer();
};

exports.itemTap = function(args) {
    var item = model.reddit.getItem(args.itemIndex);
    frameModule.topmost().navigate({
        moduleName: 'details',
        context: item
    });
};