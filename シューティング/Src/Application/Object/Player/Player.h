#pragma once

//��{�I�Ƀw�b�_�[�t�@�C������#include���֎~!!!!!!!
//���p���͋���!!!!
#include"../BaseObject.h"

class Player:public BaseObject
{
public:

	Player(){};
	~Player() { Release(); };

	//override�͍Ē�`��\��
	//void Draw()override;
	void Update()override;
	void Init()override;
	void Release()override;

private:
};