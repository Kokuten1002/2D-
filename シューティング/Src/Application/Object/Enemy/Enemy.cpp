#include "Enemy.h"

void Enemy::Draw()
{
	Math::Rectangle rc = { 0,0,64,64 };
	KdShaderManager::Instance().m_spriteShader.SetMatrix(m_mat);
	KdShaderManager::Instance().m_spriteShader.DrawTex
	(&m_Tex, 0, 0, 64, 64, &rc);
}

void Enemy::Update()
{

	m_Pos.x -= 5;
	if (m_Pos.x < -640)
	{
		m_Pos.x = 640;
	}
	Math::Matrix ETransmat;
	ETransmat = Math::Matrix::CreateTranslation(m_Pos);
	m_mat = ETransmat;
}

void Enemy::Init()
{

	m_Tex.Load("Asset/Textures/Enemy.png");
	m_Pos = { 0,0,0 };
	m_mat = Math::Matrix::Identity;
}

void Enemy::Release()
{

}
