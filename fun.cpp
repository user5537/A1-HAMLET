#include "fun.h"

vector<string> parse_book(string t)
 {
    enum STATES { Unknown, Inside, Outside } state = Unknown;
    vector<string> v;
    string word;

    for(string::size_type i=0; i<t.length(); ++i) {
        switch(state)
        {
            case Unknown:
                if(isalpha(t[i]))
                    state = Inside;
                else
                    state = Outside;
            break;

            case Outside:
                if(isalpha(t[i])) state = Inside;
            break;

            case Inside:
                if(!isalpha(t[i])) {
                    state = Outside;
                    v.push_back(word);
                    word = "";
                }
            break;
        }
        if(state == Inside) word += t[i];
    }
    if (word.length() > 0) v.push_back(word);
    return v;
}

void add_word(vector<Pair> &par, const string &word) {
    for(uint32_t i = 0; i<par.size(); ++i)
        if(par.at(i).word == word) {
            par.at(i).cnt++;
            return;
        }
    par.push_back(Pair(word));
}



