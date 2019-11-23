//電卓を作る
#include <stdio.h>

int main(void)
{
  int nyuryoku1;     //1回目に入力する数字
  int nyuryoku2;     //2回目に入力する数字
  char hugou;        //算術演算子を入力。scanfを使う場合、文字として出力する時に使う入力フォーマット指定子「％c」に対応しているのが「char」のため
  int goukei;        //合計値を計算した結果

  printf("数字を入力して下さい:");
  scanf("%d", &nyuryoku1);

  printf("+ - * / いずれかを入力して下さい:");
  scanf(" %c", &hugou);         //" %c"の %の前に空白を入れる理由:12行目で入力を終えた後の「Enter」が改行コード「\n」として認識されているため

  printf("数字を入力して下さい:");
  scanf(" %d", &nyuryoku2);    //同じく空白

//以下、swich文での構成
  switch (hugou) {
    case '+':
      goukei = nyuryoku1 + nyuryoku2;
      printf("結果は %d です\n",goukei);
      break;

    case '-':
      goukei = nyuryoku1 - nyuryoku2;
      printf("結果は %d です\n",goukei);
      break;

    case '*':
      goukei = nyuryoku1 * nyuryoku2;
      printf("結果は %d です\n",goukei);
      break;

    case '/':
      goukei = nyuryoku1 / nyuryoku2;
      printf("結果は %d です\n",goukei);
      break;
  }



//以下、if文での構成

  // if (hugou == '+')            //「==」は同じの意味。hugouに入っているのが「+」の場合これが実行
  //   goukei = nyuryoku1 + nyuryoku2;
  //   // printf("結果は %d です\n",goukei);　←ここでprintfを有効にすると結果が二つでるため削除
  // else if (hugou == '-')      //"-"とかではエラーが出たので、文字コードで表現したところうまくいった
  //   goukei = nyuryoku1 - nyuryoku2;
  // else if (hugou == '*')
  //   goukei = nyuryoku1 * nyuryoku2;
  // else if (hugou == '/')
  //   goukei = nyuryoku1 / nyuryoku2;
  //   printf("結果は %d です\n",goukei);

  return 0;
}
