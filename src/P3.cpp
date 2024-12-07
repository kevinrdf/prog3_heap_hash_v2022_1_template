#include <iostream>
#include <climits>
#include <unordered_map>
#include <queue>
#include "P3.h"
using namespace std;

string find_min_subtext(const string& texto, const string& valorP){
    unordered_map<char, int> pCount;
    for (char ch:valorP){
        pCount[ch]++;
    }

    int required=pCount.size();
    int formed=0;

    unordered_map<char, int> window_count;
    priority_queue<pair<int, int>,vector<pair<int, int>>,greater<>> min_heap;

    int left=0, right=0;
    int start_idx=0;
    int min_len=INT_MAX;

    while (right < texto.size()){
        char c = texto[right];
        if (pCount.count(c)){
            window_count[c]++;
            if (window_count[c] == pCount[c]){
                formed++;
            }
        }

        while (formed == required){
            if ((right - left + 1) < min_len){
                min_len = right - left + 1;
                start_idx = left;
            }

            char left_char = texto[left];
            if (pCount.count(left_char)){
                if (window_count[left_char] == pCount[left_char]){
                    formed--;
                }
                window_count[left_char]--;
            }
            left++;
        }
        right++;
    }

    return min_len==INT_MAX ? "" : texto.substr(start_idx, min_len);
}