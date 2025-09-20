#ifndef READ_DIRECTORY_H
#define READ_DIRECTORY_H

//Define directory contents struct
typedef struct directory_contents
{
	int file_count;
	int sub_directory_count;
	char** file_names;
	char** sub_directory_names;
}directory_contents;


//Read directory contents into directory contents struct
void read_directory_contents(
		directory_contents* directory_contents_pointer,
		char* directory_path)
{
