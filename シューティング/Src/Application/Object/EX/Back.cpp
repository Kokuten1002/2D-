#include "Back.h"

void Back::Draw()
{
	Math::Rectangle rc = { 0,0,1280,720 };
	KdShaderManager::Instance().m_spriteShader.SetMatrix(m_Mat);
	KdShaderManager::Instance().m_spriteShader.DrawTex
	(&m_Tex, 0, 0, 1280, 720, &rc);

}

void Back::Update()
{


}

void Back::Init()
{
	m_Tex.Load("Asset/Textures/Back_01.png");
	m_Pos = { 0,0,0 };


	m_Mat = Math::Matrix::Identity;
}

void Back::Release()
{
}
