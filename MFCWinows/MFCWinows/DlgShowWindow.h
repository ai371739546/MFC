#pragma once


// CDlgShowWindow �Ի���

class CDlgShowWindow : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgShowWindow)

public:
	CDlgShowWindow(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgShowWindow();

// �Ի�������
	enum { IDD = IDD_DLGSHOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
