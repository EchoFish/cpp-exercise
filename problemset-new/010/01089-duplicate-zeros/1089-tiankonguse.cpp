/*************************************************************************
    > File Name: duplicate-zeros.cpp
    > Author: tiankonguse
    > Mail: i@tiankonguse.com
    > Created Time: Sun Jun  16 10:24:26 2019
    > link: https://leetcode.com/problems/duplicate-zeros/
    > No: 1089. Duplicate Zeros
    > Contest: https://leetcode.com/contest/weekly-contest-141
 ************************************************************************/

#include "../../include/base.h"

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeroNum = 0;
        int lastPos = 0;
        for(;lastPos + zeroNum < arr.size();lastPos++){
            if(arr[lastPos] == 0){
                zeroNum++;
            }
        }
        lastPos--;

        if(arr[lastPos] == 0 && lastPos + zeroNum == arr.size()){
            zeroNum--;//last pos is zero, skip

            arr[lastPos + zeroNum] = arr[lastPos];
            lastPos--;
        }

        while(lastPos >= 0){
            if(arr[lastPos] == 0){
                arr[lastPos + zeroNum] = arr[lastPos];
                zeroNum--;
            }
            arr[lastPos + zeroNum] = arr[lastPos];
            lastPos--;
        }
    }
};

/*
    //ListNode* root = vecToList({1,2,3,4});
    // vecToTree({});
    // std::reverse(a.begin(),a.end());
    //int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
*/
int main() {
#define CLASS Solution
#define FUNCTION smallestRepunitDivByK

    int first;
    int second;
    int expectAns;

    first = 113;
    second = 1;
    expectAns = -1;
    //TEST_SMP1(CLASS, FUNCTION, expectAns, first);
    //TEST_SMP2(Solution, FUNCTION, expectAns, first, second);

    return 0;
}
