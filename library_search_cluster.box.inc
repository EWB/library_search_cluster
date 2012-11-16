<?php
/**
 * @file
 * library_search_cluster.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_search_cluster_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'encore_search';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Encore';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://encore.stlawu.edu/iii/encore/Home,$Search.form.sdirect" id="form" method="get" name="form"><input id="target" name="target" onfocus="if (this.value==\'Search for books, videos, digital collections...\') this.value=\'\';" size="45" value="Search for books, videos, digital collections..." type="text"><input value="Search" type="submit"><!--  <input type=image src="../images/search.gif" name="submit"/><a href="library.stlawu.edu">Advanced Search</a><br />
--><input name="formids" value="target" type="hidden"><input name="lang" value="eng" type="hidden"><input name="suite" value="def" type="hidden"><input name="reservedids" value="lang,suite" type="hidden"><br><input name="submitmode" value="" type="hidden"><input name="submitname" value="" type="hidden"></form>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['encore_search'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'journal_search';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Journal Search';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://ba4rv7xl7m.search.serialssolutions.com/" method="get"><input name="V" value="1.0" type="hidden"><input name="N" value="100" type="hidden"><input name="L" value="BA4RV7XL7M" type="hidden"><input name="S" value="T_B" type="hidden"><input name="C" onfocus="if (this.value==\'Search by journal title...\') this.value=\'\';" size="37" value="Search by journal title..."><input value="Search" type="submit">&nbsp;</form>',
      'format' => 'full_html',
    ),
  );
  $export['journal_search'] = $box;

  return $export;
}
