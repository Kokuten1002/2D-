#pragma once
//��{�I�Ƀw�b�_�[�t�@�C������#include���֎~!!!!!!!
//���p���͋���!!!!
#include"../BaseObject.h"
//���d�ǂݍ��ݗ}���R�}���h

class Enemy:public BaseObject
{
public:

	Enemy() {};
	~Enemy() { Release(); };


	void Draw();
	void Update();
	void Init();
	void Release();



private:

};