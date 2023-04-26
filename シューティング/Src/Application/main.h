#pragma once
//基本的にヘッダーファイル内で#includeを禁止!!!!!!!
//※継承は許す!!!!

class GameScene;
// ============================================================
// アプリケーションクラス
//	APP.～ でどこからでもアクセス可能
//============================================================
class Application
{
// メンバ
public:

	// アプリケーション実行
	void Execute();

	// アプリケーション終了
	void End() { m_endFlag = true; }

	HWND GetWindowHandle() const { return m_window.GetWndHandle(); }
	int GetMouseWheelValue() const { return m_window.GetMouseWheelVal(); }

	int GetNowFPS() const { return m_fpsController.m_nowfps; }
	int GetMaxFPS() const { return m_fpsController.m_maxFps; }

private:

	void PreUpdate();
	void Update();
	void PostUpdate();

	void PreDraw();
	void Draw();
	void PostDraw();

	void DrawSprite();

	// アプリケーション初期化
	bool Init(int w, int h);

	// アプリケーション解放
	void Release();

	// ゲームウィンドウクラス
	KdWindow		m_window;

	// FPSコントローラー
	KdFPSController	m_fpsController;

	// ゲーム終了フラグ trueで終了する
	bool		m_endFlag = false;


	//プレイヤー
	//スマートポインタ(宣言とインスタンス化する必要がある)
	//シェアードポインタ (シェアードポインタにすることでdeleteが要らない!!!!)
	//std::shared_ptr<Player>player;
	//敵
	//生ポインタ
	//std::shared_ptr<Enemy>enemy;
	//背景
	//std::shared_ptr<Back>back;
	 
	//可変長配列
	GameScene *m_Scene;
//=====================================================
// シングルトンパターン
//=====================================================
private:
	// 
	Application() {}

public:
	static Application &Instance(){
		static Application Instance;
		return Instance;
	}
};