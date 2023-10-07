// question 1 
/* You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";
        int i = 0, j = 0;

        while (i < m || j < n) {
            if (i < m) {
                result.push_back(word1[i++]);
            }
            if (j < n) {
                result.push_back(word2[j++]);
            }
        }

        return result;
    }
int main(){
    string word1 = "abc";
    string word2 = "pqrs";
    string result = mergeAlternately(word1,word2);
    cout<<result;
    return 0;
}