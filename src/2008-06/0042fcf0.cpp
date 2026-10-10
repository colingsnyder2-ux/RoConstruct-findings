// from server: 64% by colin
struct CXTPPopupBar {
    static CXTPPopupBar* CreatePopupBar(void*);
    void SetCommandBars(void*);
};

struct CMainFrame {
    int OnCreateHelper(void* p);
};

extern "C" int __cdecl _mbscmp(const unsigned char*, const unsigned char*);

int CMainFrame::OnCreateHelper(void* p)
{
    if (*(int*)((char*)p + 4) != 0)
        return 0;
    if (_mbscmp((const unsigned char*)*(void**)((char*)p + 0x14), (const unsigned char*)0x810dcc) != 0)
        return 0;
    CXTPPopupBar* bar = CXTPPopupBar::CreatePopupBar(*(void**)((char*)this + 0xec));
    bar->SetCommandBars(*(void**)((char*)p + 0x14));
    *(void**)p = bar;
    return 1;
}
