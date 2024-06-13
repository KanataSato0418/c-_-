/*
TriangleClass.cpp
TriangleClassクラスの各メンバ関数を定義
*/

//ヘッダをインクルード
#include <iostream>
#include "TriangleClass.h"

//メンバ変数に値を代入するメンバ関数
void TriangleClass::Input()
{
	teihen = 20.0f;
	takasa = 15.0f;
}

//メンバ変数同士の計算を行うメンバ関数
void TriangleClass::Calc() {
	menseki = teihen * takasa / 2.0f;
}

//メンバ変数の内容を出力するメンバ関数
void TriangleClass::Disp() {
	std::cout << "三角形の面積＝" << menseki << "\n";
}