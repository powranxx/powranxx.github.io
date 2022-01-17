<?php  // create DATABASE myquotes, TABLE quotes

// header
include('templates/header.html');

print '<h2>Create DATABASE myquotes</h2>';

$dbc = mysqli_connect('localhost', 'root', '', '');

// Super User for Project 5
$createUser = "CREATE USER IF NOT EXISTS 'tom'@'localhost' IDENTIFIED BY 'YES'";
$grantUser = "GRANT ALL PRIVILEGES ON *.* TO 'tom'@'localhost' WITH GRANT OPTION";
mysqli_query($dbc, $createUser);

if(mysqli_query($dbc, $createUser)){
echo 'CREATE USER tom@localhost worked<br/>';
if(mysqli_query($dbc, $grantUser)){
echo 'GRANT ALL PRIVILEGES ON *.* worked<br/>';
}else{
echo 'GRANT ALL PRIVILEGES ON *.* no work:'.mysqli_error($dbc).'<br/>';
}
}else{
echo 'CREATE USER tom@localhost no work:'.mysqli_error($dbc).'<br/>';
}

mysqli_query($dbc, "CREATE DATABASE myquotes"); 

mysqli_select_db($dbc, 'myquotes'); 

$query = 'CREATE TABLE quotes (
id INT UNSIGNED NOT NULL  AUTO_INCREMENT,
  quote TEXT NOT NULL,
  source VARCHAR(100) NOT NULL,
  favorite TINYINT(1) UNSIGNED NOT  NULL,
  date_entered TIMESTAMP NOT NULL  DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (id)
) CHARACTER SET utf8';

mysqli_query($dbc, $query);
print '<p>Successfully created TABLE quotes!</p>';

include('templates/footer.html'); // Need the footer.
