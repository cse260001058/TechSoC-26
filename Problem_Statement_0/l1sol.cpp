#include <iostream>
using namespace std;

// Defining the variables

int N;
float C, w, heaviest_w, lightest_w, total_w;

int main()
{
    cout << "Enter Capacity : ";
    cin >> C;
    cout << "Number of Containers : ";
    cin >> N;

    // the loop where everything happens

    for (int i = 1; i <= N; i++)
    {
        cout << "Weight of container " << i << " is : \n";
        cin >> w;
        total_w += w;
        if (i == 1)
        {
            heaviest_w = w;
            lightest_w = w;
        }
        else
        {
            if (w > heaviest_w)
            {
                heaviest_w = w;
            }
            if (w < lightest_w)
            {
                lightest_w = w;
            }
        }
    }

    float avg_w = total_w / N;

    // just casual printing stuff

    cout << "The total shipment weight : " << total_w << endl;
    cout << "The average shipment weight : " << avg_w << endl;
    cout << "The heaviest shipment weight : " << heaviest_w << endl;
    cout << "The lightest shipment weight : " << lightest_w << endl;

    if (total_w >= 200)
    {
        cout << "Classification : Heavy\n";
    }
    else
    {
        cout << "Classification : Light\n";
    }

    cout << "Port capacity : " << C << endl;

    if (total_w <= C)
    {
        cout << "Status: Shipment can be unloaded\n";
    }
    else
    {
        cout << "Status: Shipment cannot be unloaded\n";
    }
}