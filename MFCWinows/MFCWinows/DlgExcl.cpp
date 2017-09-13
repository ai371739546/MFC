// DlgExcl.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCWinows.h"
#include "DlgExcl.h"
#include "afxdialogex.h"


// CDlgExcl 对话框

IMPLEMENT_DYNAMIC(CDlgExcl, CDialogEx)

CDlgExcl::CDlgExcl(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgExcl::IDD, pParent)
{

}

CDlgExcl::~CDlgExcl()
{
}

void CDlgExcl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgExcl, CDialogEx)
END_MESSAGE_MAP()


// CDlgExcl 消息处理程序
