class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle.empty()){
        return 0;
       } 
       size_t index = haystack.find(needle);
       if(index!= string::npos){
        return static_cast<int>(index);
       }
       else {
        return -1;
       }
    }
};
