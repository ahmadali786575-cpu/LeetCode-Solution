class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0 ;i< image.size(); i++){
            int start = 0, end = image.size()-1;
            while(start<end){
                if(image[i][start]==0){
                    image[i][start] = 1;
                }
                else{
                    image[i][start] =0;

                }
                if(image[i][end]==0){
                    image[i][end] = 1;
                }
                else{
                    image[i][end] =0;

                }
                swap(image[i][start], image[i][end]);
                start++; end--;
            }
            // Handle middle element
            if(start == end) {
                image[i][start] = 1 - image[i][start];
            }

        }
        return image;
        
    }
};