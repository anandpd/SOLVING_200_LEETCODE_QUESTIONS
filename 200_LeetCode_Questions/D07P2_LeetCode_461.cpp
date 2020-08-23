class Solution {
public:
    int hammingDistance(int x, int y) {
    int xor_num = x^y;
    int counter=0;
    while(xor_num > 0){
        xor_num = (xor_num & (xor_num-1));
        counter++;
    }
    return counter;
        
    }
};