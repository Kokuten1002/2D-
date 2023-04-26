#pragma once

//基本的にヘッダーファイル内で#includeを禁止!!!!!!!
//※継承は許す!!!!
#include"../BaseObject.h"

class Player:public BaseObject
{
public:

	Player(){};
	~Player() { Release(); };

	//overrideは再定義を表す
	//void Draw()override;
	void Update()override;
	void Init()override;
	void Release()override;

private:
};