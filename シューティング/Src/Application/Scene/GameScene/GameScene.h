#pragma once

class BaseObject;
class Back;


class GameScene
{
public:
	GameScene(){}
	~GameScene(){}
	
	void Draw();
	void Update();
	void Init();
	void Release();

	//もしかしたら何か必要かも
	//でも必要になったら作る



private:
	std::vector<std::shared_ptr<BaseObject>>m_objList;
	std::shared_ptr<Back>back;
	
};