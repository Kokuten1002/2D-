#include "GameScene.h"
#include"../../Object/Player/Player.h"
#include"../../Object/Enemy/Enemy.h"
#include"../../Object/EX/Back.h"


void GameScene::Draw()
{
	// ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// 2D�̕`��͂��̊Ԃōs��
	KdShaderManager::Instance().m_spriteShader.Begin();
	{
		back->Draw();
		//�͈̓x�[�Xfor
		for (auto& obj : m_objList)
		{
			obj->Draw();
		}
		for (int i = 0; i < m_objList.size(); i++)
		{
			m_objList[i]->Draw();
		}



	}
	KdShaderManager::Instance().m_spriteShader.End();



}

void GameScene::Update()
{
	//�͈̓x�[�Xfor
	//�|�����[�t�B�Y���F�e�Ɠ����N���X
	//�A�b�v�L���X�g�F�������ǂ�Γ����N���X�œ���̎��ɐe�N���X�ɖ߂�
	for (auto& obj : m_objList)
	{
		obj->Update();
	}

	for (int i = 0; i < m_objList.size(); i++)
	{
		m_objList[i]->Update();
	}
}

void GameScene::Init()
{
	//�C���X�^���X��(���̉�)
	std::shared_ptr<Player>player;
	player = std::make_shared<Player>();
	player->Init();
	m_objList.push_back(player);

	/*std::shared_ptr<Enemy>enemy;
	enemy = std::make_shared<Enemy>();
	enemy->Init();
	m_objList.push_back(enemy);*/

	back = std::make_shared<Back>();
	back->Init();


}

void GameScene::Release()
{

}
