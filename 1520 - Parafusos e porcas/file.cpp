#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> findAllOccurrences(int key, const std::vector<int>& array);

main()
{
    int n, x;
    vector<int> vec;

    while (!(cin >> n).eof())
    {
        for (int i = 0; i < n; i++)
        {
            int _begin, _end;
            cin >> _begin >> _end;

            int tam = 0;

            if (_end >= _begin)
            {
                while (_begin <= _end)
                {
                    vec.push_back(_begin);
                    _begin++;

                }
            }
        }

        cin >> x;

        sort(vec.begin(), vec.end());

        vector <int> occurrences= findAllOccurrences(x, vec);

        //todo

        if (!occurrences.empty()) cout << x << " found from " << occurrences.front() << " to " << occurrences.back() << endl;
        else cout << x << " not found" << endl;
    }

}

/* Código adaptado pelo Chat GPT */
vector<int> findAllOccurrences(int key, const std::vector<int>& array) {
    std::vector<int> occurrences;

    int low = 0;
    int high = array.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == key) {
            occurrences.push_back(mid);

            // Encontrar mais ocorrências à esquerda
            int left = mid - 1;
            while (left >= 0 && array[left] == key) {
                occurrences.push_back(left);
                --left;
            }

            // Encontrar mais ocorrências à direita
            int right = mid + 1;
            while (right < array.size() && array[right] == key) {
                occurrences.push_back(right);
                ++right;
            }

            break;  // Importante para evitar repetições desnecessárias no vetor
        } else if (array[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return occurrences;
}


/*
______________________________
3

1 - (1, 3)
2 - (2, 4)
3 - (3, 5)

1 2 3
2 3 4
3 4 5

1 2 2 3 3 3 4 4 5
0 1 2 3 4 5 6 7 8

4: Achado no indice 6 até 7

_______________________________
4

1 - (1, 3)
2 - (2, 4)
3 - (1, 5)
4 - (3 ,6)

1 2 3
2 3 4
1 2 3 4 5
3 4 5 6

1 1 2 2 2 3 3 3 3 4  4  4  5  5  6
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

3: Achado no indice 5 até 8

_______________________________
2

1 - (1, 3)
2 - (3, 5)

1 2 3
3 4 5

1 2 3 3 4 5
0 1 2 3 4 5

7: 7 não achado
*/
