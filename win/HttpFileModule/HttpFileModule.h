// HttpFileModule.h : HttpFileModule DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CHttpFileModuleApp
// �йش���ʵ�ֵ���Ϣ������� HttpFileModule.cpp
//

class CHttpFileModuleApp : public CWinApp
{
public:
	CHttpFileModuleApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
