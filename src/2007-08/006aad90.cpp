// from server: 90% by colin
struct CXTPRibbonBar {
    char pad0[0x20];
    void* m_hwnd;
    char pad1[0x244 - 0x24];
    int m_nFrame;
    char pad2[0x27c - 0x248];
    void* m_pFrameHelper;
    void OnFrameChanged(int);
};

extern "C" void __stdcall UpdateWindow(void*);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, unsigned int);

int __fastcall sub_6a7f70(CXTPRibbonBar*);
int __fastcall sub_6a7a40(CXTPRibbonBar*);
void __fastcall sub_716b20(void*);
void* __fastcall sub_6301c0(void*);

void CXTPRibbonBar::OnFrameChanged(int a1)
{
    m_nFrame = a1;
    void** vtbl = *(void***)this;
    void (__fastcall *fn)(void*) = (void (__fastcall *)(void*))vtbl[0x17c / 4];
    fn(this);
    if (sub_6a7f70(this)) {
        UpdateWindow(m_hwnd);
        sub_716b20(m_pFrameHelper);
        return;
    }
    if (sub_6a7a40(this)) {
        void* p = sub_6301c0(*(void**)((char*)m_pFrameHelper + 8));
        SendMessageA(*(void**)((char*)p + 0x20), 0x85, 0, 0);
    }
}
