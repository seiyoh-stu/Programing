#pragma once
#include "SceneBase.h"
#include"../object/Player.h"
#include"../object/Enemy.h"

class GameMainScene
{
private:
	int high_score;
	int back_ground;
	int barrier_image;
	int mileage;
	int enemy_image[3];
	int enemy_count[3];
	Player* player;
	Enemy** enemy;

private:
	GameMainScene();
	virtual ~GameMainScene();

	virtual void Initialize() override;
	virtual eSceneType Update() override;
	virtual void Finalize() override;
	virtual void Draw() const override;

	virtual eSceneType GetNowScene() const override;

private:
	//ハイスコア読み込み処理
	void ReadHighScore();
	//当たり判定
	bool IsHitCheck(Player* p, Enemy* e);
};

