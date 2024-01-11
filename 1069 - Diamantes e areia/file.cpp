#include <iostream>
#include <stack>

using namespace std;

main()
{
    string test;
    int n;

    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> test;
        int flag = 0;
        stack<char> stack;

        for (int i = 0; i < test.size(); i++)
        {
            if (test.at(i) == '<')
            {
                stack.push(test.at(i));
            }

            else
            {
                if (test.at(i) == '>')
                {
                    if (!stack.empty())
                    {
                        stack.pop();
                        flag++;
                    }
                }
            }
        }

        cout << flag << endl;
        flag = 0;
    }

}
