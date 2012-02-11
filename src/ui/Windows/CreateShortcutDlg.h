/*
* Copyright (c) 2003-2012 Rony Shapiro <ronys@users.sourceforge.net>.
* All rights reserved. Use of the code is allowed under the
* Artistic License 2.0 terms, as specified in the LICENSE file
* distributed with this code, or available from
* http://www.opensource.org/licenses/artistic-license-2.0.php
*/
#pragma once

/// \file CreateShortcutDlg.h
//-----------------------------------------------------------------------------

#include "PWDialog.h"
#include "ControlExtns.h"

class CCreateShortcutDlg : public CPWDialog
{
  // Construction
public:
  CCreateShortcutDlg(CWnd* pParent = NULL,
    const CSecString &cs_tg = L"", const CSecString &cs_tt = L"", 
    const CSecString &cs_tu = L"");

  // Dialog Data
  //{{AFX_DATA(CCreateShortcutDlg)
  enum { IDD = IDD_CREATE_SHORTCUT };
  CSecString m_username;
  CSecString m_title;
  CSecString m_group;
  // target's group, title, user
  CSecString m_tg, m_tt, m_tu;
  int m_ibasedata;

  CComboBoxExtn m_ex_group;
  CEditExtn m_ex_username;
  CEditExtn m_ex_title;

  //}}AFX_DATA

  // Overrides
  // ClassWizard generated virtual function overrides
  //{{AFX_VIRTUAL(CreateShortcutDlg)
protected:
  virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
  //}}AFX_VIRTUAL

  // Implementation
protected:

  virtual BOOL OnInitDialog();
  // Generated message map functions
  //{{AFX_MSG(CAddDlg)
  virtual void OnCancel();
  virtual void OnOK();
  afx_msg void OnHelp();
  //}}AFX_MSG

  DECLARE_MESSAGE_MAP()
public:
  afx_msg void OnBnClickedOk();

};
//-----------------------------------------------------------------------------
// Local variables:
// mode: c++
// End:
