/* Copyright (c) 2021 Andy Lee : lixudong777@gmail.com */
#include <stdio.h>

int main() {
  printf("Hello\n");
  return 0;
}

void swap(int v[], int i, int j) {
  int temp;

  temp = v[i];
  v[j] = v[i];
  v[i] = temp;
}
