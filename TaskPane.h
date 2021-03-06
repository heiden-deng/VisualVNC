// TaskPane.h : interface of the CTaskPane class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TASKPANE_H__E6B9E113_887D_4E78_8FA7_FF6518CBCA19__INCLUDED_)
#define AFX_TASKPANE_H__E6B9E113_887D_4E78_8FA7_FF6518CBCA19__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CTaskPane : public CBCGPTasksPane
{
// Construction
public:
	CTaskPane();
	
// Attributes
protected:
	int	m_nDocumentsGroup;


// Operations
public:
	void UpdateMRUFilesList ();

// Overrides
public:
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTaskPane)
	//}}AFX_VIRTUAL

protected:

// Implementation
public:
	virtual ~CTaskPane();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTaskPane)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKPANE_H__E6B9E113_887D_4E78_8FA7_FF6518CBCA19__INCLUDED_)
