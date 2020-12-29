
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

template <typename T>
class Storage
{
public:

    void swapk(int i,int j)
    {
        swap(data[i],data[j]);
    }
    size_t size()
    {
        return data.size();
    }

    void push_data(T data_to_append)
    {
        data.push_back(data_to_append);
    }

    void print_vector()
    {
        cout << "Your Vector"<<endl;

        for (int i = 0; i < data.size(); i++)
        {
            cout <<data[i]<<endl;
        }
    }


private:
    vector <T> data;

};


int main ()
{
    Storage<string> colors;

    string buffer = "";

    cout << " Enter Vector of colors"<<endl;

    do {
        getline(cin, buffer);
        if (buffer.size() > 0) {
            // Добавление элемента в конец вектора
            colors.push_data(buffer);
        }
    } while (buffer != "");

    int n = static_cast<int>(colors.size());
    colors.print_vector();

    int numbers [n];
    cout << "\v Enter Numbers"<<endl;

    for (int i=0; i<n; i++)
        cin >>numbers[i];

    for(int i = 0; i < n - 1; i++){
    int cur = i;
    while(numbers[cur] != i)
    cur++;

    colors.swapk(i, cur);

    numbers[cur] = numbers[i];
    }
   colors.print_vector();
    return 0;}
