#include "BackGround.h"
#include"DxLib.h"

//=======================================================
//‰Šú‰»
//=======================================================
void Background::Init()
{
	imageHandle = LoadGraph("ima/Background.png");
}

//=======================================================
//‰Šú‰»
//=======================================================
void Background::Draw(float cameraX)
{
	DrawGraph(-(int)(cameraX * 0.5f), 0, imageHandle, TRUE);
}