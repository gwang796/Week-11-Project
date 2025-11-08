//  main.cpp
//  COMSC-210 | Week 11 Project | Guo An Wang
//  IDE:Xcode
//  Created by Guo An Wang on 11/5/25.
//

// Include necessary headers for file handling, data structures, etc.
#include <iostream>
#include <map>
#include <list>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

const int INIT_SIZE = 9;

struct Species {
    string zone, name, category;
    int population;
};

void simulation();

int main() {
    srand(time(0));
    map<string,pair<string,int>> aquatic_zone;
    vector <Species> speciesData;
    Species temp;
    fstream input_file("data.txt");
    if (!input_file) {
        cout << "data.txt was unable to be opened" << endl;
        return 1;
    }
    while (input_file >> temp.zone >> temp.category >> temp.name >> temp.population) {
        speciesData.push_back(temp);
    }
    input_file.close();
    
    for (int i = 0; i < INIT_SIZE; i++) {
        int randIndex = rand() % 100;
        
    }
    
    return 0;
}

// Define a function to simulate environmental changes over time
// Parameters: map of aquatic zones, number of intervals
// Define main function
// Initialize a map to store aquatic zone information, each associated with an array of lists of pairs for fish, invertebrates, and plants and their populations
// Open an external file to read initial data about aquatic zones and populate the map
// If file does not open, print an error and exit
// Read data from file and populate map
// For each aquatic zone randomly extract n number of species data as pair<string,int>
// Insert species into the appropriate list in the array for their climate zone

// Close the file

// Begin a time-based simulation for environmental changes
// For 25 time intervals
// Iterate through each aquatic zone in the map
// For each zone, simulate changes
// Randomly decide if a species is to be added or removed from each category (fish, invertebrate, plant)
// If adding, generate or select a new species name to add to the list
// If removing, select a random species from the list to remove
// Print the changes for this interval, e.g., "Added {species} to {category} in {climate zone}"

// simulate for a possible random events impacting the environment natural disaster, increased water levels, extreme population
// within those events simulate possible results

// Wait or pause briefly to simulate the passage of time between intervals
// End of main function
