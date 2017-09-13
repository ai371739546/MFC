// DlgShowWindow.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCWinows.h"
#include "DlgShowWindow.h"
#include "afxdialogex.h"


// CDlgShowWindow 对话框

IMPLEMENT_DYNAMIC(CDlgShowWindow, CDialogEx)

CDlgShowWindow::CDlgShowWindow(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgShowWindow::IDD, pParent)
{

}

CDlgShowWindow::~CDlgShowWindow()
{
}

void CDlgShowWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgShowWindow, CDialogEx)
END_MESSAGE_MAP()


// CDlgShowWindow 消息处理程序
