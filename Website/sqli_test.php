<!DOCTYPE html>
<?php 

function testSQLQuery()
{
echo "hi!";

echo "testing SQL connection";

$servername = "http://arrivedatabase.cvqftzv8ankt.us-west-2.rds.amazonaws.com:3306/";
$username = "Arrive_Admin";
$password = "ArriveMDS16";

// create connection
$conn = new mysqli($servername, $username, $password);

// check connection
if ($conn->connect_error)
{
die("Connection failed!");
}

echo "Connected successfully!";

// test sending some SQL code
$sql = "DROP TABLE test_schema.test";
if ($conn->qurey($sql) === TRUE)
{
echo "droppin the tables!";
}
else
{
echo "failed to drop table D:" . $conn->error;
}

$conn->close();
}

function testDatabaseConnection()
{

echo "hi!  |||  ";

echo "testing SQL connection |||  ";

$host= "arrivedatabase.cvqftzv8ankt.us-west-2.rds.amazonaws.com";
$username = "Arrive_Admin";
$password = "ArriveMDS16";
$database_name = "";
$port = 3306;

// create connection
$conn = new mysqli("arrivedatabase.cvqftzv8ankt.us-west-2.rds.amazonaws.com", "Arrive_Admin", "ArriveMDS16", "", 3306);

// check connection
if ($conn->connect_errno)
{
die("Connection failed!" . $conn->connect_errno);
}

echo "Connected successfully!";

$conn->close();
}

testDatabaseConnection();

?>