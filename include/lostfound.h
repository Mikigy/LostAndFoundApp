#ifndef LOSTFOUND_H
#define LOSTFOUND_H

const int MAX = 100;

// Function declarations
void addItem(int*, char[][20], char[][20], char[][20], char[][15],
             char[][20], char[][30], char[][30],
             char[][15], char[][15], int*);

void viewLostItems(int*, char[][20], char[][20], char[][20], char[][15], int*);
void searchItem(char[][20], char[][20], char[][20], char[][15], int*);
void claimItem(int*, char[][20], char[][30], char[][15], int*);
void viewHistory(int*, char[][20], char[][20], char[][20], char[][15],
                 char[][30], char[][30], char[][15], char[][15], int*);
void toLower(char*);

#endif

