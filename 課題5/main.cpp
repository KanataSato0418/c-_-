#include <iostream>
#include "Data.h"

//���C���֐�
int main() {
    //�ϐ�i�ɓK���Ȓl����������
    int i;
    std::cin >> i;

    //Data�N���X�̃C���X�^���X�����
    Data x;

    //�����o�֐����Ăяo��
    x.SetValue(i); //�ϐ�i�̒l��n���i�A�N�Z�X�֐��j
    x.Disp(); //�\������
}


/*
�A�N�Z�X�֐��̕K�v��

�J�v�Z�������ăf�[�^�𒼐ڃA�N�Z�X�o���Ȃ��悤�ɂ��邽��
*/