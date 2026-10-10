// from server: 68% by colin
struct CXTPDockingPaneMiniWnd {
    char pad0[0x20];
    void* m_hWnd;
    char pad1[0xb0];
    unsigned int m_dwStyle;
    char pad2[0x10];
    void* m_pPane;
    char pad3[0x24];
    unsigned int m_nState;
    char pad4[0x24];
    unsigned int m_bActive;
    char pad5[0x1c];
    void* m_pDockingManager;
    char pad6[0x1c];
    void* m_pPaneContainer;
    void OnIdleUpdateCmdUI();
    void UpdateWindow(int, int, int, int, int);
};

extern "C" void __stdcall PostMessageA(void*, unsigned int, unsigned int, unsigned int);

void CXTPDockingPaneMiniWnd::UpdateWindow(int a, int b, int c, int d, int e)
{
    int v[4];
    v[0] = a;
    v[1] = b;
    v[2] = c;
    v[3] = d;
    (*(void (__thiscall**)(CXTPDockingPaneMiniWnd*, int*))(*(int*)this + 0x188))(this, v);

    void* pPane = *(void**)((char*)this + 0x10);
    if (*(int*)((char*)pPane + 0x18) == 0) {
        void* p = (*(void* (__thiscall**)(char*))((char*)this + 0xe4))((char*)this + 0xe4);
        void* r = (*(void* (__thiscall**)(void*, int, void*))(*(int*)p + 0x144))(p, 1, *(void**)((char*)this + 0xf0));
        void* edi = r ? (char*)r - 0x54 : 0;
        (*(void (__thiscall**)(void*, void*, void*))(*(int*)edi + 0))(edi, (char*)pPane - 0x20, this);
        pPane = edi ? (char*)edi + 0x54 : 0;
    }

    char* edi = (char*)this + 0xe4;
    void* p = (*(void* (__thiscall**)(char*))edi)(edi);
    void* r = (*(void* (__thiscall**)(void*, int, void*))(*(int*)p + 0x144))(p, 2, *(void**)((char*)this + 0xf0));
    void* ecx = r ? (char*)r - 0x20 : 0;
    *(void**)((char*)this + 0x11c) = ecx;
    (*(void (__thiscall**)(void*, void*, int, void*))(*(int*)0 + 0))(0, pPane, 1, this);
    *(void**)(*(int*)((char*)this + 0x11c) + 0x30) = edi;
    PostMessageA(*(void**)((char*)this + 0x20), 0x363, 0, 0);
    *(unsigned int*)((char*)this + 0x140) = 1;
    (*(void (__thiscall**)(char*))(*(int*)edi + 0x28))(edi);
    *(unsigned int*)((char*)this + 0xd0) |= 0xc;
}
