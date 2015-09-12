<?php
/**
 * @file
 * glacier_product.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function glacier_product_taxonomy_default_vocabularies() {
  return array(
    'commerce_categories' => array(
      'name' => 'Commerce categories',
      'machine_name' => 'commerce_categories',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
