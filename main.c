#include <stdio.h>
#include <time.h>

int main()
{
  clock_t start_time, end_time;
  double elapsed_time;

  printf("按下Enter键开始计时");
  getchar(); // 等待用户按下enter

  start_time = clock();

  printf("计时器已启动,请按enter键停止...");
  getchar(); // 等待用户按下enter

  end_time = clock();

  elapsed_time = (double)(end_time - start_time);

  printf("计时器已停止, 经过%.2f 秒\n", elapsed_time);

  return 0;
}