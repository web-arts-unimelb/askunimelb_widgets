<?php
/**
 * The settings for for the ask.unimelb Widgets module.
 */
function askunimelb_widgets_admin_settings() {
  $form = array();
  $form['askunimelb_widgets_blocks'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of blocks'),
    '#default_value' => variable_get('askunimelb_widgets_blocks', 1),
    '#size' => 2,
    '#maxlength' => 2,
    '#description' => t('This is the number of ask.unimelb Widget blocks you will be able to configure on !link', array('!link.' => l('your blocks configuration page', 'admin/structure/block'))),
  );

  return system_settings_form($form);
}

/**
 * Validation handler for the admin settings form.
 */
function askunimelb_widgets_admin_settings_validate($form, &$form_state) {
  $blocks = $form_state['values']['askunimelb_widgets_blocks'];
  if ($blocks < 0) {
    form_set_error('askunimelb_widgets_blocks', t('The number of blocks can not be a negative number'));
  }
}
