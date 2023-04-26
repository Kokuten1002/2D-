#include "Player.h"


//void Player::Draw()
//{
//	Math::Rectangle rc = { 0,0,64,64 };
//	KdShaderManager::Instance().m_spriteShader.SetMatrix(m_mat);
//	KdShaderManager::Instance().m_spriteShader.DrawTex
//	(&m_Tex, 0, 0, 64, 64, &rc);
//
//}

void Player::Update()
{
	//���@����
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		m_Pos.x -= 7;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		m_Pos.x += 7;
	}
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		m_Pos.y += 7;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		m_Pos.y -= 7;
	}


	Math::Matrix Transmat;
	//	Transmat = DirectX::XMMatrixTranslation(m_playerPos.x, m_playerPos.y, m_playerPos.z);
	//CreateTranslation��Vector3�ł��\�A�]����float�^�ł��g�p�\
	Transmat = Math::Matrix::CreateTranslation(m_Pos);
	m_mat = Transmat;
}

void Player::Init()
{
	//�v���C���[������
	m_Tex.Load("Asset/Textures/player.png");
	//�[���N���A
	//m_playerPos={} 
	//m_playerPos=Math::Vector3(0,0,0);
	m_Pos = { 0,0,0 };
	//�P�ʍs��
	m_mat = Math::Matrix::Identity;
}

void Player::Release()
{
}
