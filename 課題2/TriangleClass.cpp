/*
TriangleClass.cpp
TriangleClass�N���X�̊e�����o�֐����`
*/

//�w�b�_���C���N���[�h
#include <iostream>
#include "TriangleClass.h"

//�����o�ϐ��ɒl�������郁���o�֐�
void TriangleClass::Input()
{
	teihen = 20.0f;
	takasa = 15.0f;
}

//�����o�ϐ����m�̌v�Z���s�������o�֐�
void TriangleClass::Calc() {
	menseki = teihen * takasa / 2.0f;
}

//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void TriangleClass::Disp() {
	std::cout << "�O�p�`�̖ʐρ�" << menseki << "\n";
}