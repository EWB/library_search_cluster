<?php
/**
 * @file
 * library_search_cluster.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_search_cluster_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
