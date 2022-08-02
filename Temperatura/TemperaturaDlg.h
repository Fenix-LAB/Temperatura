
// TemperaturaDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CTemperaturaDlg
class CTemperaturaDlg : public CDialogEx
{
// Construcción
public:
	CTemperaturaDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEMPERATURA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	double m_fahr;
	double m_celsius;
public:
	afx_msg void OnBnClickedBtnConvertir();
};
