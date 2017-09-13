#pragma once


// CDlgShowWindow 对话框

class CDlgShowWindow : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgShowWindow)

public:
	CDlgShowWindow(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgShowWindow();

// 对话框数据
	enum { IDD = IDD_DLGSHOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
