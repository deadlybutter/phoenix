<?php

/**
 * @file
 * Rogue admin functionality.
 */

/**
 * System settings form for Rogue configuration.
 */
function dosomething_rogue_config_form($form, &$form_state) {
  $form = array();

  $form['rogue'] = [
    '#type' => 'fieldset',
    '#title' => t('Rogue Settings.')
  ];

  $form['rogue']['dosomething_rogue_url'] = [
    '#type' => 'textfield',
    '#title' => t('Rogue URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('dosomething_rogue_url', 'https://rogue.dosomething.org/api'),
  ];

  $form['rogue']['dosomething_rogue_api_version'] = [
    '#type' => 'textfield',
    '#title' => t('Rogue API version number'),
    '#required' => TRUE,
    '#default_value' => variable_get('dosomething_rogue_api_version', 'v1'),
  ];

  $form['rogue']['dosomething_rogue_api_key'] = [
    '#type' => 'textfield',
    '#title' => t('Rogue API Key'),
    '#required' => FALSE,
    '#default_value' => variable_get('dosomething_rogue_api_key', ''),
  ];

  $form['rogue']['rogue_collection'] = [
    '#type' => 'checkbox',
    '#title' => t('Send reportbacks to rogue'),
    '#description' => t('If set, when a user submits a reportback it will be sent to our reportback service.'),
    '#default_value' => variable_get('rogue_collection', FALSE),
    '#size' => 20,
  ];

  $form['rogue']['rogue_signup_collection'] = [
    '#type' => 'checkbox',
    '#title' => t('Send signups to rogue'),
    '#description' => t('If set, when a user signs up it will be sent to Rogue.'),
    '#default_value' => variable_get('rogue_signup_collection', FALSE),
    '#size' => 20,
  ];

  return system_settings_form($form);
}
