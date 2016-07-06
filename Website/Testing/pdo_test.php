
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

        echo "Constructing PDO || ";
        $dbh = new PDO($dsn, $username, $password);
        echo "created database connection";

        CREATE TABLE Persons
            (
                Username varchar(255),
                Password varchar(255),
                ID int,
                Code int
            );

    }
    catch (PDOException $e)
    {
        echo $e->getMessage();
    }
    catch (Exception $e)
    {
        echo $e->getMessage();
    }

?>
