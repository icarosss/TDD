// TDD_Exam01.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "TDD_Exam01.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// google test 
#ifdef _DEBUG
#include <gtest/gtest.h>
#pragma comment(lib, "gtestd.lib")
#endif

// ������ ���� ���α׷� ��ü�Դϴ�.

TEST(Demo_Test, Equal)
{
	EXPECT_EQ(1,1);
	EXPECT_EQ(1,2);
}


CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	HMODULE hModule = ::GetModuleHandle(NULL);


	testing::InitGoogleTest(&argc, argv);

	if (hModule != NULL)
	{
		// MFC�� �ʱ�ȭ�մϴ�. �ʱ�ȭ���� ���� ��� ������ �μ��մϴ�.
		if (!AfxWinInit(hModule, NULL, ::GetCommandLine(), 0))
		{
			// TODO: ���� �ڵ带 �ʿ信 ���� �����մϴ�.
			_tprintf(_T("�ɰ��� ����: MFC�� �ʱ�ȭ���� ���߽��ϴ�.\n"));
			nRetCode = 1;
		}
		else
		{
			// TODO: ���� ���α׷��� ������ ���⿡�� �ڵ��մϴ�.
		}
	}
	else
	{
		// TODO: ���� �ڵ带 �ʿ信 ���� �����մϴ�.
		_tprintf(_T("�ɰ��� ����: GetModuleHandle ����\n"));
		nRetCode = 1;
	}



	RUN_ALL_TESTS();

	return nRetCode;
}
