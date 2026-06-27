class Solution {
public:
    int countDigits(int num) {
        int tempNum = num;
        int counter = 0;

        while(tempNum != 0){
            int lastDigit = tempNum % 10;
             if(lastDigit != 0 && num % lastDigit == 0){
                counter++;
            }
            tempNum /= 10;
        }

        return counter;
    }
};