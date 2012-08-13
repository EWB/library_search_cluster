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
  $box->delta = 'encore';
  $box->plugin_key = 'simple';
  $box->title = 'Encore';
  $box->description = 'Encore search';
  $box->options = array(
    'body' => array(
      'value' => '<form method="get" action="http://encore.stlawu.edu/iii/encore/Home,$Search.form.sdirect" name="form" id="form">
<input name="target" value="Search for books, videos, digital collections..." id="target" size="45" type="text" onfocus="if (this.value==\'Search for books, videos, digital collections...\') this.value=\'\';" /><input type="submit" value="Search"/><!--  <input type=image src="http://webtest.stlawu.edu/library/sites/stlawu.edu.library/files/images/search.gif" name="submit"/><a href="library.stlawu.edu">Advanced Search</a><br />
--><input name="formids" value="target" type="hidden"><input name="lang" value="eng" type="hidden"><input name="suite" value="def" type="hidden"><input name="reservedids" value="lang,suite" type="hidden"><br />
<input name="submitmode" value="" type="hidden"><input name="submitname" value="" type="hidden"></form>',
      'format' => 'full_html',
    ),
  );
  $export['encore'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'journal_search';
  $box->plugin_key = 'simple';
  $box->title = 'Journal Finder';
  $box->description = 'Journal Search';
  $box->options = array(
    'body' => array(
      'value' => '<form method="get" action="http://ba4rv7xl7m.search.serialssolutions.com/"><input value="1.0" name="V" type="hidden" /><input value="100" name="N" type="hidden" /><input type="hidden" name="L" value="BA4RV7XL7M" /><input type="hidden" name="S" value="T_B" /><input name="C" value="Search by journal title..." onfocus="if (this.value==\'Search by journal title...\') this.value=\'\';" size="37" /><input value="Search" type="submit" /></form>',
      'format' => 'full_html',
    ),
  );
  $export['journal_search'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'odysseus';
  $box->plugin_key = 'simple';
  $box->title = 'Odysseus';
  $box->description = 'Odysseus search';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://library.stlawu.edu/search/X" method="post"><select name="searchtype"><option value="a">Author</option><option selected="selected" value="t">Title</option><option value="d">Subject</option><option value="X">Keyword</option><option value="c">Call Number</option></select><input maxlength="75" name="searcharg" onfocus="if (this.value==\'Search for books, videos and more...\') this.value=\'\';" size="35" value="Search for books, videos and more..." type="text"><input name="submit" value="Search" type="submit"><br><input name="searchscope" value="3" type="hidden"></form>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['odysseus'] = $box;

  return $export;
}