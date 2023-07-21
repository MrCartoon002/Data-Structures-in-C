#include<stdio.h>

/*int main()
{
    int value, coins;
    scanf("%d",&value);

}*/
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
const int INF = 100000;

//k is number of denominations of the coin or length of d
int coin_change(int d[], int n, int k) {
  int M[n+1];
  M[0] = 0;

  int i, j;
  for(j=1; j<=n; j++) {
    int minimum = INF;

    for(i=1; i<=k; i++) {
      if(j >= d[i]) {
        minimum = MIN(minimum, 1+M[j-d[i]]);
      }
    }
    M[j] = minimum;
  }
  return M[n];
}

int main() {
  // array starting from 1, element at index 0 is fake
  int d[] = {1, 5, 6, 9};
  printf("%d\n", coin_change(d, 2, 3)); //to make 5. Number of denominations = 3
  return 0;
}
