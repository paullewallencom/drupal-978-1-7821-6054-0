<?php
/**
 * @file
 * fire_department_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fire_department_content_type_node_info() {
  $items = array(
    'fire_department' => array(
      'name' => t('Fire Department'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Fire Department Name'),
      'help' => '',
    ),
  );
  return $items;
}
