// MyRichEditCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "VisualVNC.h"
#include "MainFrm.h"
#include "VisualVNCView.h"
#include "MyRichEditCtrl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyRichEditCtrl

CMyRichEditCtrl::CMyRichEditCtrl()
{
}

CMyRichEditCtrl::~CMyRichEditCtrl()
{
}


BEGIN_MESSAGE_MAP(CMyRichEditCtrl, CRichEditCtrl)
	//{{AFX_MSG_MAP(CMyRichEditCtrl)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyRichEditCtrl message handlers

BOOL CMyRichEditCtrl::PreTranslateMessage(MSG* pMsg) 
{
	// �༭���ݼ����� 
    if(WM_KEYDOWN == pMsg->message)  
    { 
        if(::GetFocus() == m_hWnd && (GetKeyState( VK_CONTROL) & 0xFF00 ) == 0xFF00)  
        { 
            // ȫѡ 
            if( pMsg->wParam == 'A' || pMsg->wParam == 'a') 
            { 
                this->SetSel(0, -1); 
                return true; 
            } 
			
            // ���� 
            if( pMsg->wParam == 'C' || pMsg->wParam == 'c') 
            { 
                this->Copy(); 
                return true; 
            } 
			
            // ���� 
            if( pMsg->wParam == 'X' || pMsg->wParam == 'x') 
            { 
                this->Cut(); 
                return true; 
            } 
			
            // ճ�� 
            if( pMsg->wParam == 'V' || pMsg->wParam == 'v') 
            { 
                this->Paste(); 
                return true; 
            } 
			
            // ճ�� 
            if( pMsg->wParam == 'Z' || pMsg->wParam == 'z') 
            { 
                this->Undo(); 
                return true; 
            } 
			
        } 
    } 	
	return CRichEditCtrl::PreTranslateMessage(pMsg);
}
