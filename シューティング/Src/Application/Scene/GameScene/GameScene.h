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

	//�����������牽���K�v����
	//�ł��K�v�ɂȂ�������



private:
	std::vector<std::shared_ptr<BaseObject>>m_objList;
	std::shared_ptr<Back>back;
	
};