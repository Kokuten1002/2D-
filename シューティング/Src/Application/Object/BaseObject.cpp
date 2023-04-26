#include "BaseObject.h"

void BaseObject::Draw()
{

		Math::Rectangle rc = { 0,0,64,64 };
		KdShaderManager::Instance().m_spriteShader.SetMatrix(m_mat);
		KdShaderManager::Instance().m_spriteShader.DrawTex
		(&m_Tex, 0, 0, 64, 64, &rc);


}

void BaseObject::Update()
{

}

void BaseObject::Init()
{

}

void BaseObject::Release()
{

}
