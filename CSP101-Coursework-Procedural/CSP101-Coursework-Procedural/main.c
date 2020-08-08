//
//  main.c
//  Coursework-Assessment-1_Zayne
//
//  Created by Zayne on 29/06/2020.
//  Copyright © 2020 Zayne. All rights reserved.
//

// Include statement.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Macro definition.
#define Max_String_Length 30
#define Max_Record_List_Size 10

struct CD
{
	int numberOfTracks;
	bool isAvailable;
	// Total time of playing.
	int playingTime;
	// String definition with fixed length.
	char artist[Max_String_Length];
	char title[Max_String_Length];
	char comments[Max_String_Length];
};

struct DVD
{
	bool isAvailable;
	int playingTime;
	char director[Max_String_Length];
	char title[Max_String_Length];
	char comments[Max_String_Length];
};

int main(int argc, const char *argv[])
{
	// CD
	// Fixed length array of CD.
	struct CD cd_list[Max_Record_List_Size];
	int total_CDs = 0;
	struct CD cd1, cd2;

	// CD 1
	// Assign string value to variable.
	strcpy(cd1.title, "title_CD1");
	strcpy(cd1.artist, "artist_CD1");
	strcpy(cd1.comments, "comment_CD1");
	cd1.numberOfTracks = 23;
	cd1.playingTime = 260;
	cd1.isAvailable = false;

	// CD 2
	// Assign string value to variable.
	strcpy(cd2.title, "title_CD2");
	strcpy(cd2.artist, "artist_CD2");
	strcpy(cd2.comments, "comment_CD2");
	cd2.numberOfTracks = 23;
	cd2.playingTime = 260;
	cd2.isAvailable = true;

	// printf("%d\n", (int)(sizeof(cd_list) / sizeof(struct CD)));
	cd_list[0] = cd1;
	total_CDs++;
	cd_list[1] = cd2;
	total_CDs++;

	for (int i = 0; i<total_CDs; i++) {
		printf("%s\n", cd_list[i].title);
	}

	printf("=================\n");
	// DVD
	// Fixed length array of DVD.
	struct DVD dvd_list[Max_Record_List_Size];
	int total_DVDs = 0;
	struct DVD dvd1, dvd2;

	// DVD 1
	// Assign string value to variable.
	strcpy(dvd1.title, "title_DVD1");
	strcpy(dvd1.director, "director_DVD1");
	strcpy(dvd1.comments, "comments_DVD1");
	dvd1.playingTime = 3000;
	dvd1.isAvailable = true;

	// DVD 2
	// Assign string value to variable.
	strcpy(dvd2.title, "title_DVD2");
	strcpy(dvd2.director, "director_DVD2");
	strcpy(dvd2.comments, "comments_DVD2");
	dvd2.playingTime = 3400;
	dvd2.isAvailable = false;

	// printf("%d\n", (int)(sizeof(dvd_list) / sizeof(struct DVD)));
	// Add item to array.
	dvd_list[0] = dvd1;
	total_DVDs++;
	dvd_list[1] = dvd2;
	total_DVDs++;

	// For loop
	for (int i = 0; i<total_DVDs; i++) {
		// print
		printf("%s\n", dvd_list[i].title);
	}

	return 0;
};
