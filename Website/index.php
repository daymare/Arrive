


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
include 'code_homepage.php';

// jquery test.
// include 'JQurey_test.html';

// pdo database test
include 'pdo_test.php';

?>


</html>
<? 
} 
?>
