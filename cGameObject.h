
#pragma once
#include "cObject.h"

class cGameObject : public cObject
{
public:
	//�������ͽ� ������ �ϴ� �� �־
	int nHP;
	int nMP;
	int nSP;
	float fSpeed;

	int nStr;
	int nDef;
	int nInt;
	float fCrt;
	//�ʿ��Ҷ����� �߰�
public:
	cGameObject();
	~cGameObject();

	virtual void Update();
	virtual void Render();
	virtual void Release();
};