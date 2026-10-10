// from server: 48% by tester
struct CXTPStatusBar
{
    void OnUpdateCmdUI(void* pCmdUI, int bDisableIfNoHndler);
};

struct CStatusCmdUI
{
    char pad[0x14];
    CXTPStatusBar* m_pStatusBar;
    void Enable(int bOn);
};

extern "C" void __stdcall sub_77DDB8(void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CStatusCmdUI::Enable(int bOn)
{
    char buf[0x14];
    sub_77DDB8(buf);
    *(int*)(buf + 0x14) = 0;
    m_pStatusBar->OnUpdateCmdUI(this, 1);
    sub_77DDBC(buf);
}
