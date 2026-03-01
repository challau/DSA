class Solution {
public:
    int minPartitions(string n) {
        int len = n.length();
        int max_digits_in_string = 0;
        for(auto element : n){
            int digit = element - '0';
            max_digits_in_string = max(max_digits_in_string,digit);
        }
        return max_digits_in_string;
        
    }
};