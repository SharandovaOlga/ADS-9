// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int a, b;
  int c1 = 0;
  int c2 = size-1;
  while (c1 <= c2) {
    b = c1 + ((c2 - c1) / 2);
    a = 0;
    if (arr[b] == value) {
      for (int j = 0; arr[b + j] == value; j++) {
        a++;
        if ((b + j) == c2) {
          break;
        }
      }
      for (int j = 1; arr[b - j] == value; j++) {
        a++;
        if (b - j == 0) {
          break;
        }
      }
      break;
    }
    else if (arr[b] > value) {
      c2 = b - 1;
    }
    else {
      c1 = b + 1;
    }
  }
  if (a == 0) {
    return 0;
  }
  else {
    return a;
  }
}
