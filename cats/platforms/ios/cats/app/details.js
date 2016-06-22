var observable = require('data/observable');
var bindingContext = new observable.Observable();

exports.onLoaded = function(args){
    var page = args.object;
    bindingContext = page.navigationContext;
    page.bindingContext = bindingContext;
};