#include "Sample.h"

//SampleClass�N���X�̃|�C���^��p��
SampleClass* a;

//���C���֐�
int main()
{
	//�N���X�̃C���X�^���X(����)�����
	a = new SampleClass;

	//3�̃����o�֐����Ăяo��
	a->Input();
	a->Plus();
	a->Disp();

	//�g���I������C���X�^���X���폜
	delete a;
}