
// MFCWinows.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCWinowsApp:
// �йش����ʵ�֣������ MFCWinows.cpp
//

class CMFCWinowsApp : public CWinApp
{
public:
	CMFCWinowsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCWinowsApp theApp;