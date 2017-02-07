#include <string>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <conio.h>

#include <map>
#include <time.h>

#include "Character.cpp"

using namespace std;

string ascii_logo = "ascii_logo.txt";

// converts character array
// to string and returns it
string getString(char x)
{
    string s(1, x);

    return s;
}

// not in used c-like
struct mapValue
{
    string key;
    int km;
    mapValue(string v1, int v2) : key(v1), km(v2) {}
};

map<string, std::pair<string, int>> generate_map()
{
    map<string, std::pair<string, int>> myMap;
    srand(time(0));

    // add shop to map
    myMap["shop"] = make_pair("s", rand() % 50 + 1);
    myMap["hotel"] = make_pair("ht", rand() % 50 + 1);
    myMap["bank"] = make_pair("b", rand() % 50 + 1);
    myMap["forest"] = make_pair("f", rand() % 50 + 1);
    myMap["road"] = make_pair("r", rand() % 50 + 1);
    myMap["hospital"] = make_pair("hs", rand() % 50 + 1);

    return myMap;
}

int main()
{
    string text;
    ifstream ifs(ascii_logo);

    while (!ifs.eof())
    {
        getline(ifs, text);
        cout << "" << text << "\n";
    }

    cout << "What is your name?" << endl;

    string i_name; // input name
    cin >> i_name;
    cout << endl;

    Character c(i_name);
    printf("Welcome %s!\n", i_name.c_str());

    map<string, std::pair<string, int>> current_map = generate_map();

    string cmd_help = "M = map | S = sleep | W = walk | R = run | I = inventory";
    cout << "Type H for help | esc to quit" << endl;

    while (true)
    {
        char ch;
        ch = _getch(); // continious keyboard listener

        // Quitting
        if (ch == 27)
        {
            string quit;
            cout << "Are you sure? y/n" << endl;
            cin >> quit;
            if (quit == "y")
            {
                printf("Bye %s!", i_name.c_str());
                break;
            }
        }

        // sequence
        if (ch != '\0')
        {
            // cout << getString(ch);
            // cout<<endl;
            string s = getString(ch); // just to help

            // chance
            double chance = rand() % 100 + 0;
            // cout << chance <<endl;

            double dice = (rand() % 50 + 0);
            // cout << dice << endl;
            //  help
            if (s == "h" || s == "H")
            {
                cout << cmd_help << endl;
            }

            // map
            if (s == "m")
            {
                for (auto it = current_map.cbegin(); it != current_map.cend(); ++it)
                {
                    cout << it->first << " : " << it->second.first << " at " << it->second.second << "km\n";
                }
                cout << endl;

                // no chance :(  TOO BAD
                if (chance < dice / 6)
                {
                    cout << "You died reading the map!" << endl;
                    // cout << dice/6 << endl;
                    break;
                }
            }

            // sleep
            if (s == "s")
            {
                // srand(time(0));

                int sleep_time = rand() % 24 + 1;
                cout << "You sleep for " << sleep_time << " hour(s)!" << endl;

                // no chance :(  TOO BAD
                if (chance < dice / 3)
                {
                    cout << "You died while sleeping!" << endl;
                    // cout << dice/3 << endl;
                    break;
                }
            }

            // w
            if (s == "w")
            {
                int walk_km = rand() % 10 + 1;
                cout << "You walk " << walk_km << " km!" << endl;
                                // no chance :(  TOO BAD
                if (chance < dice / 5)
                {
                    cout << "You died!" << endl;
                    // cout << dice/5 << endl;
                    break;
                }
            }

            // run
            if (s == "r")
            {
                int run_km = rand() % 24 + 1;
                cout << "You run " << run_km << " km!" << endl;

                                              // no chance :(  TOO BAD
                if (chance < dice / 4)
                {
                    cout << "You died!" << endl;
                    // cout << dice/4 << endl;
                    break;
                }
            }

            // inventory
            if (s == "i")
            {
                cout << "You have NOTHING!!!!" << endl;
            }

            if (chance < dice / 2)
                {
                    cout << "You had chance today!" << endl;
                    // cout << dice/4 << endl;
                    c.setMoney(c.getMoney() + 100);
                    cout << "You found 100$" << endl;
                    cout << "You now have " << c.getMoney() << "$" << endl;
                   // break;
                }
        }

    }

    // show stats
    cout << "STATS" << endl;
    cout << c.getName() << endl;
    cout << c.getlvl() << "years" << endl;
    cout << c.getMoney() << "$" << endl;

    return 0;
}