double taylor_sine(double x, int n) {
  assert(n % 2 != 0); // for det skal være ulige tal
    int t = 0; 

  for (int i = 1; i <= n; i += 2) {
    x = x * x;
    t++; // tælleren
  }
  int result = x / t; // regner hele brøken ud

  return -1.0;
}
