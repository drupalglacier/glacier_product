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
        4 => 'field_product_variations',
      ),
      'hidden' => array(
        0 => 'field_order',
        1 => 'rabbit_hole',
        2 => 'path',
        3 => 'xmlsitemap',
        4 => 'metatags',
        10 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_content' => 'ds_content',
      'title_field' => 'ds_content',
      'field_order' => 'hidden',
      'field_product_category' => 'ds_content',
      'rabbit_hole' => 'hidden',
      'path' => 'hidden',
      'body' => 'ds_content',
      'xmlsitemap' => 'hidden',
      'field_product_variations' => 'ds_content',
      'metatags' => 'hidden',
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
