<?php
/**
 * @file
 * marquee.features.inc
 */

/**
 * Implements hook_node_info().
 */
function marquee_node_info() {
  $items = array(
    'marquee' => array(
      'name' => t('Marquee'),
      'base' => 'node_content',
      'description' => t('Use this for hero Marquee slides.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
