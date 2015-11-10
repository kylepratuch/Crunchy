<?php
/**
 * @file
 * granola_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function granola_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'bird_food' => array(
      'name' => 'Seeds',
      'machine_name' => 'bird_food',
      'description' => 'Bird food',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'dried_fruit' => array(
      'name' => 'Dried fruit',
      'machine_name' => 'dried_fruit',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'flavorings_and_spices' => array(
      'name' => 'Flavorings & spices',
      'machine_name' => 'flavorings_and_spices',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'grains' => array(
      'name' => 'Grains',
      'machine_name' => 'grains',
      'description' => 'Granola base',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'nuts' => array(
      'name' => 'Nuts',
      'machine_name' => 'nuts',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'oils_fats' => array(
      'name' => 'Oils/Fats',
      'machine_name' => 'oils_fats',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sweeteners' => array(
      'name' => 'Sweeteners',
      'machine_name' => 'sweeteners',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
