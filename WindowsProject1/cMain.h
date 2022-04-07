#pragma once
#include "wx/wx.h"
#include <wx/aboutdlg.h>
#include "wx/msgdlg.h"
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
	void OnCheckListBoxEvent(wxCommandEvent& evt);
private:
	void OnCheckBoxEvent(wxCommandEvent& evt);
	void ShowSimpleAboutDialog(wxCommandEvent& evt);

public:
	wxTextCtrl* m_txt1 = nullptr;
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxCheckBox* m_check = nullptr;
	wxPanel* panel = nullptr;
	wxCheckListBox* m_list1 = nullptr;

	wxMenuBar* menubar;
	wxMenu *About;
	wxMessageDialog* WxMessageDialog1;
	//wxTextCtrl* textctrl;

	void OnButtonClicked(wxCommandEvent &evt);
	void OnRemoveClicked(wxCommandEvent& evt);

	void MenubarClicked(wxCommandEvent& event);


	wxDECLARE_EVENT_TABLE();
};

