#include "cMain.h"


wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001,OnButtonClicked)
	EVT_BUTTON(10010, OnRemoveClicked)
	EVT_CHECKLISTBOX(1101, OnCheckBoxEvent)
	EVT_MENU(11011, ShowSimpleAboutDialog)
wxEND_EVENT_TABLE()

cMain::cMain() :wxFrame(nullptr,wxID_ANY,"To-Do(Mridul Tiwari) ",wxDefaultPosition,wxSize(400,430)) {
	Center();
	m_btn1 = new wxButton(this, 10001, "ADD TASK", wxPoint(10, 50), wxSize(80, 30));
	m_btn2 = new wxButton(this,10010,"Remove All",wxPoint(290,50),wxSize(80,30));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(360, 30));
	m_list1 = new wxCheckListBox(this,1101,wxPoint(10,110),wxSize(360,250));
	//WxMessageDialog1 = new wxMessageDialog(this,11010,wxMessageBoxCaptionStr,,wxDefaultPosition,wxDefaultSize);
	//wxPanel* panel = new wxPanel(this, -1);
	menubar = new wxMenuBar;
	About = new wxMenu;
	About->Append(11011,"&Information");

	menubar->Append(About, wxT("&About"));
	SetMenuBar(menubar);

	//textctrl = new wxTextCtrl(panel, -1, wxT(""), wxDefaultPosition, wxSize(250,150), wxTE_MULTILINE);

}
cMain:: ~cMain() {
	
}

void cMain::OnCheckBoxEvent(wxCommandEvent& evt)
{
	if (evt.IsChecked()) {
		cMain::OnRemoveClicked(evt);
	}
}

void cMain::OnButtonClicked(wxCommandEvent& evt) {
	m_list1->Append(m_txt1->GetValue());
	evt.Skip();
}
void cMain::OnRemoveClicked(wxCommandEvent& evt) {
	m_list1->Clear();
	evt.Skip();
}
void cMain::ShowSimpleAboutDialog(wxCommandEvent& evt)
{
	wxMessageBox("Hello, I am Mridul Tiwari. I created this Gui App to showwcase my knowledge of wxWidgets","Information");
}