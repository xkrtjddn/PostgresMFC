
// MFCpostgresSQL.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMFCpostgresSQLApp:
// �� Ŭ������ ������ ���ؼ��� MFCpostgresSQL.cpp�� �����Ͻʽÿ�.
//

class CMFCpostgresSQLApp : public CWinApp
{
public:
	CMFCpostgresSQLApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMFCpostgresSQLApp theApp;