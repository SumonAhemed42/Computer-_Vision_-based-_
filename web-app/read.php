<?php
// Specify the path to the text file
$file_path = '../data.txt';

// Read the entire file into a string
$file_content = file_get_contents($file_path);

// Output the file content
echo $file_content;