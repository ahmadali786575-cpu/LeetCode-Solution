class Solution {
public:
    int partition(vector<int>& arr, int st, int end) {
        int randomIdx = st + rand() % (end - st + 1);
        swap(arr[randomIdx], arr[end]);

        int pivot = arr[end];
        int i = st, j = st, k = end;

        while (j <= k) {
            if (arr[j] < pivot) {
                swap(arr[i++], arr[j++]);
            }
            else if (arr[j] > pivot) {
                swap(arr[j], arr[k--]);
            }
            else {
                j++;
            }
        }

        return i + (k - i + 1) / 2;
    }

    void quickSort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int pivIdx = partition(arr, st, end);

            quickSort(arr, st, pivIdx - 1);
            quickSort(arr, pivIdx + 1, end);
        }
    }
    vector<int> sortArray(vector<int>& arr) {
        quickSort(arr, 0, (int)arr.size() - 1);
        return arr;
    }
};