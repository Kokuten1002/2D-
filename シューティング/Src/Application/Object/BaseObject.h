#pragma once

class BaseObject
{
public:

	BaseObject() {}
	~BaseObject() { Release(); }

	//仮想関数
	//継承される親クラスには付ける
	virtual void Draw();
	virtual void Update();
	virtual void Init();

	virtual void Release();

	//関数名()=0にすると純粋仮想関数になる

protected:
	KdTexture m_Tex;
	Math::Vector3 m_Pos;
	Math::Matrix m_mat;

};