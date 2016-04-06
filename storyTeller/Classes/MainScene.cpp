#include "MainScene.h"

USING_NS_CC;
using namespace std;

CCScene* MainScene::scene()
{
	CCScene* scene = CCScene::create();

	MainScene* layer = MainScene::create();

	scene->addChild(layer);

	return scene;
}

bool MainScene::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	return true;
}
