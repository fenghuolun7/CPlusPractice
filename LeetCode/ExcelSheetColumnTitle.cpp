#include<iostream>
#include<string>
#include <algorithm>

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string res;
        int temp;

        while(columnNumber > 0){
            temp = columnNumber % 26;
            if (temp == 0)
                temp = 26;
            res += 'A' - 1 + temp;
            columnNumber -= temp;
            columnNumber /= 26;
        }

        reverse(res.begin(), res.end());
        return res;    
        

    }
};


int main (){
    Solution s;
    std::string test_1 = s.convertToTitle(1);
    std::string test_2 = s.convertToTitle(28);
    std::string test_3 = s.convertToTitle(701);
    std::string test_4 = s.convertToTitle(2147483647);
    std::cout << test_1 << std::endl;
    std::cout << test_2 << std::endl;
    std::cout << test_3 << std::endl;
    std::cout << test_4 << std::endl;
    

}