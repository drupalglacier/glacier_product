<?php
/**
 * @file
 * glacier_product.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function glacier_product_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content',
        1 => 'title_field',
        2 => 'field_product_category',
        3 => 'body',
        5 => 'field_product_variations',
      ),
      'hidden' => array(
        4 => 'rabbit_hole',
        6 => 'path',
        7 => 'xmlsitemap',
        8 => 'metatags',
        9 => 'field_order',
        10 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_content' => 'ds_content',
      'title_field' => 'ds_content',
      'field_product_category' => 'ds_content',
      'body' => 'ds_content',
      'rabbit_hole' => 'hidden',
      'field_product_variations' => 'ds_content',
      'path' => 'hidden',
      'xmlsitemap' => 'hidden',
      'metatags' => 'hidden',
      'field_order' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|product|form'] = $ds_layout;

  return $export;
}
