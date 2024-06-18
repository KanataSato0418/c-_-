#include "Circle.h"

//コンストラクタ
Circle::Circle():(3.14),
{

}



//円の面積を求める関数
//引数:半径
//戻値:面積
void Circle::Menseki()
{
	return r * r * PI;
}