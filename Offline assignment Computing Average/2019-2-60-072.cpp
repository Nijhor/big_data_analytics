#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

int main()
{
    srand(time(NULL));
    int n = 1000000 ;
    int sum = 0, num;
    int c=0;
    float avg;

    auto start = chrono::high_resolution_clock::now(); //start time

    for(int i=0; i<n; i++){
        num = rand() % 10;
        sum += num;
    }



    avg = (float) sum / n;

    auto end = chrono::high_resolution_clock::now(); //end time
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count(); //calculating the duration in milliseconds

    cout << "Average of " << n << " random integers: " << avg << endl;
    cout << "Execution time: " << duration << " milliseconds" << endl;

    return 0;
}
