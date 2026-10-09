// from server: 54% by colin
// roc 2007-08 006941b0  unit: CXTPStatusBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006941b0

extern "C" void __stdcall SetRectEmpty(void*);
extern "C" void __stdcall sub_693c60(const char*);

struct CXTPStatusBar {
    char pad[0x30];
    void SetPaneText(int nIndex, const char* lpszText);
};

void CXTPStatusBar::SetPaneText(int nIndex, const char* lpszText)
{
    if (lpszText != 0)
    {
        sub_693c60(lpszText);
        return;
    }
    SetRectEmpty(0);
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x24) = -1;
    SetRectEmpty((char*)this + 0xc);
    SetRectEmpty((char*)this + 0x28);
}
