package com.zayne.coursework;

public class Tester {

    public static void main(String[] args) {
        // Database initialisation.
        var db = new Database();

        // `cd_1` initialisation.
        var cd_1 = new CD();
        // Set values for `cd_1` fields.
        cd_1.setTitle("CD_1 title");
        cd_1.setArtist("CD_1 artist");
        cd_1.setNumOfTracks(20);
        cd_1.setPlayingTime(50);
        cd_1.setIsAvailable(true);
        cd_1.setComments("CD_1 comments");

        // `cd_2` initialisation.
        var cd_2 = new CD();
        // Set values for `cd_2` fields.
        cd_2.setTitle("CD_2 title");
        cd_2.setArtist("CD_2 artist");
        cd_2.setNumOfTracks(20);
        cd_2.setPlayingTime(50);
        cd_2.setIsAvailable(false);
        cd_2.setComments("CD_2 comments");

        // Add items to database.
        db.addItem(cd_1);
        db.addItem(cd_2);

        // `dvd_1` initialisation.
        var dvd_1 = new DVD();
        // Set values for `dvd_1` fields.
        dvd_1.setTitle("DVD_1 title");
        dvd_1.setDirector("DVD_1 director");
        dvd_1.setPlayingTime(100);
        dvd_1.setIsAvailable(true);
        dvd_1.setComments("DVD_1 comments");

        // `dvd_2` initialisation.
        var dvd_2 = new DVD();
        // Set values for `dvd_2` fields.
        dvd_2.setTitle("DVD_2 title");
        dvd_2.setDirector("DVD_2 director");
        dvd_2.setPlayingTime(100);
        dvd_2.setIsAvailable(true);
        dvd_2.setComments("DVD_2 comments");

        // Add items to database.
        db.addItem(dvd_1);
        db.addItem(dvd_2);

        // Display all items stored in database.
        db.ListAllItems();
    }
}
