#pragma once
//基本的にヘッダーファイル内で#includeを禁止!!!!!!!
//※継承は許す!!!!
#include"../BaseObject.h"
//多重読み込み抑制コマンド

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