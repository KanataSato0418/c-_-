#include "Calclation.h"

//プロトタイプ宣言
void SetX(float a, float b);
void SetY(float a, float b);

//グローバル変数
Calclation *x,*y;

//メイン関数
int main()
{
	//インスタンスXの処理
	x = new Calclation();
	SetX(5.0, 10.0);
	x->Disp();
	delete x;

	//インスタンスYの処理
	y = new Calclation();
	SetY(8.0, 3.0);
	y->Disp();
	delete y;
}

//インスタンスXのアクセス関数を呼ぶ
void SetX(float a, float b)
{
	x->SetA(a);
	x->SetB(b);
}

//インスタンスYのアクセス関数を呼ぶ
void SetY(float a, float b)
{
	y->SetA(a);
	y->SetB(b);
}