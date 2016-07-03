
<?php

try
{
echo "Creating SQL Conn ||";
$dbhost = $_SERVER['RDS_HOSTNAME'];
$dbport = $_SERVER['RDS_PORT'];
$dbname = $_SERVER['RDS_DB_NAME'];

echo "Initializing dsn || ";
$dsn = "mysql:host={$dbhost};port={$dbport};dbname={$dbname}";
echo "Initializing Username || ";
$username = $_SERVER['RDS_USERNAME'];
echo "Initializing password || ";
$password = $_SERVER['RDS_PASSWORD'];

echo "Constructing PDO";
$dbh = new PDO($dsn, $username, $password);

CREATE TABLE Persons
	(
	Username varchar(255),
	Password varchar(255),
	ID int,
	Code int
	);


  // create database connection variables
//$host = 'arrivedatabase.cvqftzv8ankt.us-west-2.rds.amazonaws.com:3306';
/*$port = 3306;
$dbname = 'test_schema';

  $somethingIDK = "mysql:host={$host};dbname={$dbname}";
  $user = "Arrive_Admin";
  $password = "ArriveMDS16";

  // create the database connection
  echo 'creating database connection   ||   ';
  $database_connection = new PDO($somethingIDK, $user, $password);*/
  echo "created database connection";

}
catch (PDOException $e)
{
  echo $e->getMessage();
}

?>
