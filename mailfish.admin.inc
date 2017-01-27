<?php

/**
 * Created by PhpStorm.
 * User: brabhamm
 * Date: 1/27/17
 * Time: 1:29 PM
 */
/**
 * Implements hook_admin_settings_form().
 */
function mailfish_admin_settings_form() {
  $form = array();
  $form['mailfish_types'] = array(
    '#title' => t('The content types to enable Mailfish Subscriptions for'),
    '#description' => t('On the specified node types, a Mailfish subscription option will be available and can be enabled while that node is being edited.'),
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('mailfish_types', array()),
  );
  return system_settings_form($form);
}
