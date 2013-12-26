<?php
/**
 * @file
 * floor_plans.features.inc
 */

/**
 * Implements hook_views_api().
 */
function floor_plans_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function floor_plans_image_default_styles() {
  $styles = array();

  // Exported image style: marquee.
  $styles['marquee'] = array(
    'name' => 'marquee',
    'label' => 'Marquee',
    'effects' => array(
      1 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function floor_plans_node_info() {
  $items = array(
    'floor_plans' => array(
      'name' => t('Floor plans'),
      'base' => 'node_content',
      'description' => t('A content type for <em>floor plans</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
