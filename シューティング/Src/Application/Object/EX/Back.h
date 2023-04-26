#pragma once

class Back
{
public:
	void Draw();
	void Update();
	void Init();

	void Release();

private:

	Math::Vector3 m_Pos;
	KdTexture m_Tex;
	Math::Matrix m_Mat;
};