


<?
if ($_SERVER['REQUEST_METHOD'] === 'POST')
{
  $file = '/tmp/sample-app.log';
  $message = file_get_contents('php://input');
  file_put_contents($file, date('Y-m-d H:i:s') . " Received message: " . $message . "\n", FILE_APPEND);
}
else
{
?>
<!doctype html>
<html lang="en">

<?php

// code homepage.
include ($_SERVER['DOCUMENT_ROOT']."/Homepage/homepage.php");

/// Testing area ///

// jquery test.
// include 'JQurey_test.html';

// pdo database test
include (dirname(__DIR__).'/Testing/pdo_test.php');

?>


</html>
<? 
} 
?>
