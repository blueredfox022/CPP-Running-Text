#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    system("cls");
    string text = "Hello World          ";
    int width = 40;

    while (true)
    {
        for (int i = 0; i < text.size(); i++)
        {
            string display = text.substr(i) + text.substr(0, i);
            if (display.size() > width)
            {
                display = display.substr(0, width);
            }

            cout << "\r" << display;
            cout.flush();
            this_thread::sleep_for(chrono::milliseconds(200));
            /* code */
        }
    }

    return 0;
}
