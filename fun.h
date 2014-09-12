#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


vector<string> parse_book(string t);

struct Pair {
    string word;
    int cnt;
    Pair(string word) { this->word = word; cnt = 1; }
};

void add_word(vector<Pair> &v, const string &word);
