#pragma once

class BaseObject
{
public:

	BaseObject() {}
	~BaseObject() { Release(); }

	//���z�֐�
	//�p�������e�N���X�ɂ͕t����
	virtual void Draw();
	virtual void Update();
	virtual void Init();

	virtual void Release();

	//�֐���()=0�ɂ���Ə������z�֐��ɂȂ�

protected:
	KdTexture m_Tex;
	Math::Vector3 m_Pos;
	Math::Matrix m_mat;

};