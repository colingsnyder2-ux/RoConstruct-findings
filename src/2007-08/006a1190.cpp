// from server: 63% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall GetWindow(void*, unsigned int);
    __declspec(dllimport) int __stdcall GetWindowRect(void*, void*);
    __declspec(dllimport) int __stdcall IsWindowVisible(void*);
    __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

struct CXTPDockBar {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x48];
    void* m_pDockSite;
    int Method(void*, unsigned int);
};

extern void* __stdcall func_007383be(void*);
extern void* __stdcall func_006321d0();
extern void* __stdcall func_006301c0(void*);
extern void __stdcall func_006309f4(void*, void*);

int CXTPDockBar::Method(void* param1, unsigned int param2)
{
    void* pWnd = func_007383be(param1);
    if (pWnd != 0)
        return 1;

    void* pDock = func_006321d0();
    void* pVtbl = *(void**)pDock;
    void* pFunc = *(void**)((char*)pVtbl + 0xa0);
    ((void (__thiscall*)(void*, void*, void*))pFunc)(pDock, pWnd, this);

    if ((param2 & 0x10) == 0)
        return 1;

    void* hWnd = GetWindow(this->m_hWnd, 5);
    void* pChild = func_006301c0(hWnd);
    if (pChild == 0)
        return 1;

    while (1) {
        void* hChild = *(void**)((char*)pChild + 0x20);
        if (IsWindowVisible(hChild)) {
            struct { int left, top, right, bottom; } rect;
            GetWindowRect(this->m_hWnd, &rect);
            func_006309f4(pChild, &rect);
            int x = -rect.left;
            int y = -rect.top;
            void* pVtbl2 = *(void**)pWnd;
            void* pFunc2 = *(void**)((char*)pVtbl2 + 0x40);
            ((void (__thiscall*)(void*, void*, int, int))pFunc2)(pWnd, &rect, x, y);
            SendMessageA(*(void**)((char*)pChild + 0x20), 0x317, *(unsigned int*)((char*)pWnd + 4), rect.left);
        }
        void* hNext = GetWindow(*(void**)((char*)pChild + 0x20), 2);
        pChild = func_006301c0(hNext);
        if (pChild == 0)
            break;
    }
    return 1;
}
