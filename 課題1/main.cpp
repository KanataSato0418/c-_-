#include "Sample.h"

//SampleClassクラスのポインタを用意
SampleClass* a;

//メイン関数
int main()
{
	//クラスのインスタンス(実態)を作る
	a = new SampleClass;

	//3つのメンバ関数を呼び出す
	a->Input();
	a->Plus();
	a->Disp();

	//使い終わったインスタンスを削除
	delete a;
}