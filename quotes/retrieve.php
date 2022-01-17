<?php // Script retrieve.php
/* Script retrieves from  */

// header:
include('templates/header.html');

print '<h2>Retrieve All Quotes</h2>';

// Connect and select:
$dbc = mysqli_connect('localhost', 'root', '', 'myquotes');

// Define the query:
$query = 'SELECT * FROM quotes ORDER BY date_entered ASC';

if ($r = mysqli_query($dbc, $query)) { // Run the query.

// Retrieve and print every record:
while ($row = mysqli_fetch_array($r)) {
print "<p>
{$row['id']}&emsp;
{$row['quote']}&emsp;
{$row['source']}&emsp;
{$row['favorite']}&emsp;
{$row['date_entered']}
</p>\n\n";
}

} else { // Query didn't run.
print '<p style="color: red;">Could not retrieve the data</p>';
} // End of query IF.

//mysqli_close($dbc); // Close the connection.

include('templates/footer.html'); // Need the footer.
