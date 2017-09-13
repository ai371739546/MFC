#pragma once


// CDlgExcl 对话框

class CDlgExcl : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgExcl)

public:
	CDlgExcl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgExcl();

// 对话框数据
	enum { IDD = IDD_DLGSHOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
