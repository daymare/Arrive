<?php

// somehow unpack info we get from website
$password = "something we get from website";
$username = "website plz";
$code = "todays code";

// get current time

// encrypt password
$encrypted_password = crypt($password);

// send username and password to sql for verification

// if it doesn't work throw an error

// if it works send the daily code to sql for verification

// if that doesn't work throw a different error

// if that works tell sql to mark this person present for today

// return some success flag

?>