#include <iostream>
#include <numeric>
#include <vector>


int main()
{
    std::vector<int> evenFibo;
    int fn1 = 1;
    int fn2 = 2;
    int next_fn = fn1 + fn2;
    int limit = 4000000;
    evenFibo.push_back(fn2); // Put 2 into the vector
    //While the fibonacci values < 4E6
    while(next_fn < limit)
    {
        if((next_fn % 2 == 0))
        {
            evenFibo.push_back(next_fn);   
        }
        //Update and get next Fibo
        fn1 = fn2;
        fn2 = next_fn;
        next_fn = fn1+ fn2;
    }
    int sum = std::reduce(evenFibo.begin(), evenFibo.end());
    std::cout << "Even Count: " << evenFibo.size() << " Sum: " << sum << std::endl;
}