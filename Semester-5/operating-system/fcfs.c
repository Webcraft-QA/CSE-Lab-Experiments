
#include <stdio.h>

int main()
{
  int bt[20], wt[20], tat[20], i, n;
  float wtavg = 0, tatavg = 0;

  printf("\nEnter the number of processes -- ");
  scanf("%d", &n);

  if (n < 1 || n > 20)
  {
    printf("Invalid number of processes!");
    return 1;
  }

  for (i = 0; i < n; i++)
  {
    printf("Enter Burst Time for process %d -- ", i + 1);
    scanf("%d", &bt[i]);
  }

  wt[0] = 0;
  tat[0] = bt[0];

  wtavg = wt[0];
  tatavg = tat[0];

  for (i = 1; i < n; i++)
  {
    wt[i] = wt[i - 1] + bt[i - 1];
    tat[i] = wt[i] + bt[i];

    wtavg += wt[i];
    tatavg += tat[i];
  }

  printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time");

  for (i = 0; i < n; i++)
  {
    printf("\nP%d\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);
  }

  printf("\n\nAverage Waiting Time -- %.2f", wtavg / n);
  printf("\nAverage Turnaround Time -- %.2f\n", tatavg / n);

  return 0;
}
