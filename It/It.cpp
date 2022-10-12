#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int solution(vector <int> A) {
    if (A.size()>=2)
    {
        vector <int> result;
        int first_num, last_num, res;
        vector <int>::iterator it1 = A.begin()+1;
        for (size_t j = 1; j < A.size(); j++)
        {
            first_num = 0, last_num = 0, res = 0;
            for (auto i = A.begin(); i != it1; i++)
            {
                first_num += *i;
            }
            for (auto i = it1; i != A.end(); i++)
            {
                last_num += *i;
            }
            res = abs(first_num - last_num);
            result.push_back(res);
            it1++;
        }
        sort(result.begin(),result.end());
        return result[0];
    }
    else
    {
        exception ex("\nNOT ENOUGH SIZE OF VECTOR\n");
        throw ex;
    }
}

int main()
{
    try
    {
        vector <int> A{ 3,1,2,4,3 };
        int a = solution(A);
        cout << "Answer -> " << a;
    }
    catch (const std::exception& ex)
    {
        cout << ex.what();
    }
}
