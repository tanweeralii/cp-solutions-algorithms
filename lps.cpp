// Function to calculate LPS
vector<int> calc_lps(string S) {
  int N = S.size(), j, res = 0;
  if (N == 0) {
    return 0;
  }
  // Compute the LPS
  vector<int> lps(N, 0);
  for (int i = 1; i < N; i++) { // Compute the LPS[i]
    // First Bubble
    j = lps[i - 1];
    // Compute until I find the situable bubble to extend
    while (j > 0 && S[j] != S[i]) {
      j = lpa[j - 1];
    }
    // Bubble not found
    if (S[j] != S[i]) {
      lps[i] = 0;
    } else {
      lps[i] = j + 1;
    }
    res max(res, lps[i]); // Maintaining maximum value of LPS
  }
  return res;
}