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

const int INIT_SIZE = 9, INTRVLS = 25;

struct Species {
    string zone, name;
    int population;
};

//function simulation iterates through 25 years of time simulating through possible changes in the three aquatic zones
// arguments: map of aquatic zones, number of intervals
//return : none
void simulation(map<string,list<pair<string,int>>> aquatic_zone, int INTRVLS);

//function adv_simulation simulates the results of advanced events like natural distasters, higher water levels, and pollution
// arguments: map of aquatic zones, number of intervals
//return : none
void adv_simulations(map<string,list<pair<string,int>>> aquatic_zone, int INTRVLS);

int main() {
    srand(time(0));
    map<string,list<pair<string,int>>> aquatic_zone;
    vector <Species> speciesData;
    Species temp;
    fstream input_file("data.txt");
    if (!input_file) {
        cout << "data.txt was unable to be opened" << endl;
        return 1;
    }
    while (input_file >> temp.zone >> temp.name >> temp.population) {
        speciesData.push_back(temp);
    }
    input_file.close();
    
    for (int i = 0; i < INIT_SIZE; i++) {
        int randIndex = rand() % speciesData.size();
        Species s = speciesData[randIndex];
        aquatic_zone[s.zone].push_back({s.name, s.population});
    }
    
    for (auto &val : aquatic_zone) {
        cout << val.first << ":\n";
        for (auto &val2 : val.second) {
            cout << val2.first << " " << val2.second << endl;
        }
    }
    
    //simulation(aquatic_zone,INTRVLS);
    
    return 0;
}


void simulation(map<string,list<pair<string,int>>> aquatic_zone, int INTRVLS){
    for (int i = 0; i < INTRVLS; i++) {
        for (auto &zone: aquatic_zone) {
            cout << zone.first << ":\n";
            for (auto) {
                <#statements#>
            }
        }
    }
}

void adv_simulations(map<string,list<pair<string,int>>> aquatic_zone, int INTRVLS){
    
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
