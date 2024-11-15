vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int repeat = -1, miss = -1;
    int n = A.size();
    vector<int> freq(n + 1, 0); // Frequency array to count occurrences of numbers

    // Count the frequency of each number
    for (int num : A) {
        freq[num]++;
    }

    // Identify the repeated and missing numbers
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) {
            repeat = i;
        } else if (freq[i] == 0) {
            miss = i;
        }
    }

    return {repeat, miss};
}
