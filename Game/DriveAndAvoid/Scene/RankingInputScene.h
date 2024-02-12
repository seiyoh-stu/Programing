#pragma once

#include"SceneBase.h"
#include"../object/RankingData.h"
class RankingInputScene:public SceneBase
{
private:
	int background_image;
	RankingData* ranking;
	int score;
	char name[15];
	int name_num;
	int cursor_x;
	int cursor_y;

public:
	RankingInputScene();
	virtual ~RankingInputScene();

	virtual void Initialize() override;
	virtual eSceneType Update() override;
	virtual eSceneType Update()override;
	virtual void Finalize() override;

	virtual eSceneType GetNowScene() const override;

private:
	//–¼‘O“ü—Íˆ—
	bool Inputname();
};

