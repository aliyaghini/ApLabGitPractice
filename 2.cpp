#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
    int count;
    for (int i = 0; i < arrLength; ++i)// chabging <= to <.
        for (int j = 0; j < sArr[i].size(); ++j)//changing <= to <.
            // if the jth char of the string is the specific char
            if (sArr[i][j] == specificChar)//changing = to ==.
                count++;
    return count;
}

int main() {
    string sArr[4] = {
            "I am",
            "in",
            "ap",
            "class"
    };
    char findIt;
    cin >> findIt;
    cout << countAllSpecificChars(sArr, 4, findIt);
}
