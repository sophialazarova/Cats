//
//  TelerikUI.h
//  TelerikUI
//
//  Copyright (c) 2013 Telerik. All rights reserved.
//

#import <Accelerate/Accelerate.h>
#import <UIKit/UIKit.h>

@interface TelerikUI : NSObject 

+ (NSString*)versionString;

+ (void)loadClasses;

@end

// Core
#import "TKDefinitions.h"
#import "TKRange.h"
#import "TKView.h"
#import "TKCheckView.h"
#import "TKMutableArray.h"
#import "TKDateRange.h"
#import "TKStyleNode.h"
#import "TKStyleID.h"
#import "TKTheme.h"

// Drawings
#import "TKDrawing.h"
#import "TKFill.h"
#import "TKSolidFill.h"
#import "TKGradientFill.h"
#import "TKLinearGradientFill.h"
#import "TKRadialGradientFill.h"
#import "TKImageFill.h"
#import "TKStroke.h"
#import "TKPredefinedShape.h"
#import "TKBalloonShape.h"
#import "TKCheckShape.h"
#import "TKLayer.h"

// Chart
#import "TKChart.h"
#import "TKChartViewController.h"
#import "TKChartData.h"
#import "TKChartDataPoint.h"
#import "TKChartSeries.h"
#import "TKChartTitleView.h"
#import "TKChartLegendItem.h"
#import "TKChartLegendContainer.h"
#import "TKChartLegendView.h"
#import "TKChartBubbleDataPoint.h"
#import "TKChartFinancialDataPoint.h"
#import "TKChartRangeDataPoint.h"

// Chart Styles
#import "TKChartPalette.h"
#import "TKChartPaletteItem.h"

#import "TKChartStyle.h"
#import "TKChartTitleStyle.h"
#import "TKChartLegendStyle.h"
#import "TKChartLegendItemStyle.h"
#import "TKChartGridStyle.h"
#import "TKChartLabelStyle.h"
#import "TKChartSeriesStyle.h"
#import "TKChartAxisStyle.h"
#import "TKChartAxisLabelStyle.h"
#import "TKChartAxisTickStyle.h"
#import "TKChartAxisMajorTickStyle.h"
#import "TKChartAxisTitleStyle.h"
#import "TKChartPointLabelStyle.h"

// Chart Axes
#import "TKChartAxis.h"
#import "TKChartNumericAxis.h"
#import "TKChartCategoryAxis.h"
#import "TKChartDateTimeAxis.h"
#import "TKChartCategory.h"
#import "TKChartLogarithmicAxis.h"
#import "TKChartDateTimeCategoryAxis.h"

// Chart Series
#import "TKChartStackInfo.h"
#import "TKChartSeries.h"
#import "TKChartBarSeries.h"
#import "TKChartColumnSeries.h"
#import "TKChartLineSeries.h"
#import "TKChartSplineSeries.h"
#import "TKChartAreaSeries.h"
#import "TKChartSplineAreaSeries.h"
#import "TKChartPieSeries.h"
#import "TKChartScatterSeries.h"
#import "TKChartDonutSeries.h"
#import "TKChartBubbleSeries.h"
#import "TKChartOhlcSeries.h"
#import "TKChartCandlestickSeries.h"
#import "TKChartFinancialIndicator.h"
#import "TKChartSimpleMovingAverageIndicator.h"
#import "TKChartExponentialMovingAverageIndicator.h"
#import "TKChartWeightedMovingAverageIndicator.h"
#import "TKChartTriangularMovingAverageIndicator.h"
#import "TKChartBollingerBandIndicator.h"
#import "TKChartMovingAverageEnvelopesIndicator.h"
#import "TKChartPercentageVolumeOscillator.h"
#import "TKChartPercentagePriceOscillator.h"
#import "TKChartAbsoluteVolumeOscillator.h"
#import "TKChartMACDIndicator.h"
#import "TKChartRelativeStrengthIndex.h"
#import "TKChartAccumulationDistributionLine.h"
#import "TKChartTrueRangeIndicator.h"
#import "TKChartAverageTrueRangeIndicator.h"
#import "TKChartCommodityChannelIndex.h"
#import "TKChartFastStochasticIndicator.h"
#import "TKChartSlowStochasticIndicator.h"
#import "TKChartRateOfChangeIndicator.h"
#import "TKChartTRIXIndicator.h"
#import "TKChartWilliamsPercentIndicator.h"
#import "TKChartTypicalPriceIndicator.h"
#import "TKChartWeightedCloseIndicator.h"
#import "TKChartEaseOfMovementIndicator.h"
#import "TKChartMedianPriceIndicator.h"
#import "TKChartDetrendedPriceOscillator.h"
#import "TKChartForceIndexIndicator.h"
#import "TKChartRapidAdaptiveVarianceIndicator.h"
#import "TKChartModifiedMovingAverageIndicator.h"
#import "TKChartAdaptiveMovingAverageIndicator.h"
#import "TKChartStandardDeviationIndicator.h"
#import "TKChartRelativeMomentumIndex.h"
#import "TKChartOnBalanceVolumeIndicator.h"
#import "TKChartPriceVolumeTrendIndicator.h"
#import "TKChartPositiveVolumeIndexIndicator.h"
#import "TKChartNegativeVolumeIndexIndicator.h"
#import "TKChartMoneyFlowIndexIndicator.h"
#import "TKChartUltimateOscillator.h"
#import "TKChartFullStochasticIndicator.h"
#import "TKChartMarketFacilitationIndex.h"
#import "TKChartChaikinOscillator.h"
#import "TKChartBandIndicator.h"
#import "TKChartSignalLineIndicator.h"
#import "TKChartRangeBarSeries.h"
#import "TKChartRangeColumnSeries.h"

// Chart Interaction
#import "TKChartSelectionInfo.h"

// Chart UI
#import "TKChartPlotView.h"
#import "TKChartSeriesRender.h"
#import "TKChartSeriesRenderState.h"
#import "TKChartVisualPoint.h"
#import "TKChartOhlcBar.h"
#import "TKChartCandlestickBar.h"
#import "TKChartPieVisualPoint.h"
#import "TKChartBubbleVisualPoint.h"
#import "TKChartBandVisualPoint.h"
#import "TKChartPointLabelRender.h"
#import "TKChartRangeVisualPoint.h"
#import "TKChartRender.h"
#import "TKChartAxisRender.h"

// Annotations
#import "TKChartAnnotation.h"
#import "TKChartGridLineAnnotation.h"
#import "TKChartBandAnnotation.h"
#import "TKChartViewAnnotation.h"
#import "TKChartLayerAnnotation.h"
#import "TKChartCrossLineAnnotation.h"
#import "TKChartBalloonAnnotation.h"
#import "TKChartPointLabel.h"

#import "TKChartAnnotationStyle.h"
#import "TKChartGridLineAnnotationStyle.h"
#import "TKChartBandAnnotationStyle.h"
#import "TKChartCrossLineAnnotationStyle.h"
#import "TKChartBalloonAnnotationStyle.h"
#import "TKChartTrackball.h"
#import "TKChartTrackballLineAnnotation.h"
#import "TKChartTrackballTooltipAnnotation.h"

// Calendar
#import "TKCalendar.h"
#import "TKCalendarEvent.h"
#import "TKCalendarEventKitDataSource.h"

#import "TKCalendarNavigationController.h"
#import "TKCalendarYearViewController.h"
#import "TKCalendarMonthViewController.h"

#import "TKCalendarWeekPresenter.h"
#import "TKCalendarMonthPresenter.h"
#import "TKCalendarMonthNamesPresenter.h"
#import "TKCalendarYearNumbersPresenter.h"
#import "TKCalendarYearPresenter.h"
#import "TKCalendarFlowPresenter.h"

#import "TKCalendarDefaultTheme.h"
#import "TKCalendarIPadTheme.h"

#import "TKCalendarDayCell.h"
#import "TKCalendarDayNameCell.h"
#import "TKCalendarWeekNumberCell.h"
#import "TKCalendarTitleCell.h"
#import "TKCalendarMonthNameCell.h"
#import "TKCalendarYearNumberCell.h"
#import "TKCalendarMonthTitleCell.h"

#import "TKCalendarMonthCell.h"
#import "TKCalendarMonthView.h"
#import "TKCalendarYearTitleView.h"

#import "TKCalendarDayCellStyle.h"
#import "TKCalendarMonthPresenterStyle.h"
#import "TKCalendarYearPresenterStyle.h"

#import "TKViewTransition.h"

#import "TKCalendarInlineView.h"
#import "TKCalendarInlineViewTableViewCell.h"
#import "TKCalendarInlineViewTableViewCellStyle.h"

// ListView
#import "TKListView.h"
#import "TKListViewCell.h"
#import "TKListViewHeaderCell.h"
#import "TKListViewFooterCell.h"
#import "TKListViewCellBackgroundView.h"
#import "TKListViewPullToRefreshView.h"
#import "TKListViewLoadOnDemandView.h"
#import "TKListViewLinearLayout.h"
#import "TKListViewGridLayout.h"
#import "TKListViewStaggeredLayout.h"
#import "TKListViewReorderHandle.h"
#import "TKListViewLoadOnDemandCell.h"

// DataSource
#import "TKDataSource.h"
#import "TKDataSourceSettings.h"
#import "TKDataSourceChartSettings.h"
#import "TKDataSourceCollectionViewSettings.h"
#import "TKDataSourceTableViewSettings.h"
#import "TKDataSourceCalendarSettings.h"
#import "TKDataSourceListViewSettings.h"
#import "TKDataSourceAutoCompleteSettings.h"
#import "TKCollectionViewCell.h"
#import "TKDataSourceGroup.h"
#import "TKDataSourceFilterDescriptor.h"
#import "TKDataSourceGroupDescriptor.h"
#import "TKDataSourceSortDescriptor.h"

// SideDrawer
#import "TKSideDrawer.h"
#import "TKSideDrawerController.h"
#import "TKSideDrawerItem.h"
#import "TKSideDrawerSection.h"
#import "TKSideDrawerStyle.h"
#import "TKSideDrawerHeader.h"
#import "TKSideDrawerItemStyle.h"
#import "TKSideDrawerTableView.h"
#import "TKSideDrawerTransition.h"
#import "TKSideDrawerTableViewCell.h"
#import "TKSideDrawerDefaultTheme.h"
#import "TKSideDrawerView.h"

// DataForm
#import "TKEntity.h"
#import "TKEntityPropertyGroup.h"
#import "TKEntityProperty.h"
#import "TKDataForm.h"
#import "TKDataFormViewController.h"
#import "TKDataFormEntityDataSource.h"
#import "TKDataFormEditor.h"
#import "TKDataFormInlineEditor.h"
#import "TKDataFormTextFieldEditor.h"
#import "TKDataFormEmailEditor.h"
#import "TKDataFormPasswordEditor.h"
#import "TKDataFormNamePhoneEditor.h"
#import "TKDataFormPhoneEditor.h"
#import "TKDataFormDecimalEditor.h"
#import "TKDataFormNumberEditor.h"
#import "TKDataFormSwitchEditor.h"
#import "TKDataFormStepperEditor.h"
#import "TKDataFormSliderEditor.h"
#import "TKDataFormSegmentedEditor.h"
#import "TKDataFormDatePickerEditor.h"
#import "TKDataFormTimePickerEditor.h"
#import "TKDataFormPickerViewEditor.h"
#import "TKDataFormOptionsEditor.h"
#import "TKDataFormEditorStyle.h"
#import "TKDataFormValidator.h"
#import "TKDataFormOptionsViewController.h"
#import "TKEntityPropertyGroupView.h"
#import "TKEntityPropertyGroupTitleView.h"
#import "TKEntityPropertyGroupEditorsView.h"
#import "TKDataFormGroupTitleStyle.h"
#import "TKEntityPropertyGroupTitleViewIndicator.h"
#import "TKTextField.h"
#import "TKLabel.h"
#import "TKDataFormAccessoryView.h"
#import "TKDataFormAutocompleteEditor.h"
#import "TKDataFormMultilineTextEditor.h"
#import "TKImageView.h"
#import "TKDataFormAutocompleteController.h"
#import "TKDataFormViewControllerEditor.h"
#import "TKDataFormPropertyValidator.h"
#import "TKDataFormEmailValidator.h"
#import "TKDataFormNonEmptyValidator.h"
#import "TKDataFormMinimumLengthValidator.h"
#import "TKDataFormMaximumLengthValidator.h"
#import "TKDataFormRangeValidator.h"
#import "TKDataFormPhoneValidator.h"
#import "TKDataFormConverter.h"

//AlertView
#import "TKAlert.h"
#import "TKAlertAction.h"
#import "TKAlertView.h"
#import "TKAlertButtonsView.h"
#import "TKAlertContentView.h"
#import "TKAlertStyle.h"

//Gauges
#import "TKGauge.h"
#import "TKRadialGauge.h"
#import "TKLinearGauge.h"
#import "TKGaugeIndicator.h"
#import "TKGaugeSegment.h"
#import "TKGaugeScale.h"
#import "TKGaugeLinearScale.h"
#import "TKGaugeRadialScale.h"
#import "TKGaugeTicks.h"
#import "TKGaugeLabels.h"
#import "TKGaugeNeedle.h"

//AutoComplete
#import "TKAutoCompleteTextView.h"
#import "TKAutoCompleteSuggestionCell.h"
#import "TKAutoCompleteToken.h"
#import "TKAutoCompleteTokenView.h"
#import "TKSuggestionListView.h"
#import "TKAutoCompleteTokenRemoveButton.h"
#import "TKAutoCompleteController.h"

// Layouts
#import "TKCoreLayout.h"
#import "TKCoreLayoutItem.h"
#import "TKCoreStackLayout.h"
#import "TKCoreStackLayoutView.h"

#import "TKLayout.h"
#import "TKStackLayout.h"
#import "TKGridLayout.h"
#import "TKGridLayoutCellDefinition.h"


