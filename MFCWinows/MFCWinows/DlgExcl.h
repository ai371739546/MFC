#pragma once


// CDlgExcl �Ի���

class CDlgExcl : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgExcl)

public:
	CDlgExcl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgExcl();

// �Ի�������
	enum { IDD = IDD_DLGSHOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
