#include "GameScene.h"
#include"../../Object/Player/Player.h"
#include"../../Object/Enemy/Enemy.h"
#include"../../Object/EX/Back.h"


void GameScene::Draw()
{
	// ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// 2Dの描画はこの間で行う
	KdShaderManager::Instance().m_spriteShader.Begin();
	{
		back->Draw();
		//範囲ベースfor
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
	//範囲ベースfor
	//ポリモーフィズム：親と同じクラス
	//アップキャスト：元をたどれば同じクラスで特定の時に親クラスに戻る
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
	//インスタンス化(実体化)
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
