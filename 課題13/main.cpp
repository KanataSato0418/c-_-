#include "Calclation.h"

//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);

//�O���[�o���ϐ�
Calclation *x,*y;

//���C���֐�
int main()
{
	//�C���X�^���XX�̏���
	x = new Calclation();
	SetX(5.0, 10.0);
	x->Disp();
	delete x;

	//�C���X�^���XY�̏���
	y = new Calclation();
	SetY(8.0, 3.0);
	y->Disp();
	delete y;
}

//�C���X�^���XX�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b)
{
	x->SetA(a);
	x->SetB(b);
}

//�C���X�^���XY�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b)
{
	y->SetA(a);
	y->SetB(b);
}