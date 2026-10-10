// from server: 73% by colin
struct CXTPRibbonGroup {
    char pad0[0x20];
    int m_nCount;
    int m_nSize;
    void* m_pData;
    void Clear();
    ~CXTPRibbonGroup();
};

extern "C" void __stdcall sub_6ffab0(void*, int, int);
extern "C" void __fastcall sub_6301e4(void*);
extern "C" void __fastcall sub_716b70(void*);
extern "C" void __cdecl sub_62ff20();

void CXTPRibbonGroup::Clear() {
    int i = 0;
    if (m_nCount > 0) {
        do {
            void* p;
            if (i >= 0 && i >= m_nCount) {
                if (i >= m_nCount) {
                    sub_62ff20();
                }
                p = ((void**)m_pData)[i];
            } else {
                p = 0;
            }
            (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
            sub_6301e4(p);
            i++;
        } while (i < m_nCount);
    }
    sub_6ffab0((char*)this + 0x20, 0, -1);
    sub_716b70(this);
}
