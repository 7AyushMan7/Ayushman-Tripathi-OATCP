#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int boysCount, girlsCount, pairsCount(0);
    cin >> boysCount; // Input the number of boys
    int boys[boysCount];

    // Input ages of boys
    for (int i = 0; i < boysCount; i++)
        cin >> boys[i];

    cin >> girlsCount; // Input the number of girls
    int girls[girlsCount];

    // Input ages of girls
    for (int i = 0; i < girlsCount; i++)
        cin >> girls[i];

    sort(boys, boys + boysCount); // Sort ages of boys in non-decreasing order
    sort(girls, girls + girlsCount); // Sort ages of girls in non-decreasing order

    // Iterate through each boy and girl to form pairs
    for (int i = 0; i < boysCount; i++) {
        for (int j = 0; j < girlsCount; j++) {
            // Check if the absolute difference in ages is less than 2
            if (abs(boys[i] - girls[j]) < 2) {
                girls[j] = 1000; // Mark the girl as 'visited'
                pairsCount++; // Increment pairs count
                break; // Move to the next boy
            }
        }
    }

    cout << pairsCount << endl; // Output the number of pairs formed
    return 0;
}
