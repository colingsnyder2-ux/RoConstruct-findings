// from server: 81% by colin
struct MyXTPCommandBars {
    char pad[0x50];
    void* m_pPaintManager;
    char pad2[0x30];
    int m_nCount;
    void SetPaintManager(void* p);
    void* GetItem(int nIndex);
    void* GetPaintManager();
    void Refresh();
    void Update();
};

void MyXTPCommandBars::SetPaintManager(void* p) {
    if (m_pPaintManager) {
        ((void (__thiscall*)(void*))0x6301e4)(m_pPaintManager);
    }
    m_pPaintManager = p;
    if (p) {
        void** vtbl = *(void***)p;
        ((void (__thiscall*)(void*))vtbl[0x2a])(p);
    }
    int i = 0;
    while (i < m_nCount) {
        void* item = GetItem(i);
        void** vtbl2 = *(void***)item;
        ((void (__thiscall*)(void*))vtbl2[0x7e])(item);
        i++;
    }
    void* pm = GetPaintManager();
    ((void (__thiscall*)(void*))0x64c800)(pm);
    Refresh();
}
