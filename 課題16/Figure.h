#pragma once
//基本となるクラス
class Figure
{
protected:
	float teihen, takasa, menseki;
public:
	void SetTeihen(float f);
	void SetTakasa(float f);
	void Disp();
};
