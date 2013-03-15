/**
 * @file: askunimelb_widgets.js
 *
 * Process module settings and add FAQ widgets to the page if required.
 */
Drupal.behaviors.askunimelb_widgets = function(context) {
  var widgets = Drupal.settings.askunimelb_widgets;

  // Loop over the widget settings array.
  for (var i = 0; i < widgets.length; i++) {

    // Add a widget into each detected widget div.
    if ($('#askunimelb-widgets-widget-' + widgets[i].delta).length != 0) {
      RightNow.Client.Controller.addComponent(
        widgets[i],
        '//studentadmin-unimelb.widget.custhelp.com/ci/ws/get'
      );
    }
  }
}
