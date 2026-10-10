// from server: 68% by colin
// roc 2007-08 006f9380  unit: CXTPPropertyGridPaintManager  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f9380

extern "C" unsigned long __stdcall GetSysColor(int);

struct CXTPPropertyGridPaintManager {
    char pad0[8];
    char m_field8[8];
    char m_field10[8];
    char m_field18[8];
    char pad20[0x14];
    void* m_pGrid;
    void* m_pField38;
    void* m_pField3c;
    void Init();
};

struct CXTPPropertyGrid {
    char pad0[0x38];
    void* m_field38;
    char pad3c[8];
    void* m_field44;
    char pad48[8];
    void* m_field50;
    char pad54[8];
    void* m_field5c;
    char pad60[8];
    void* m_field68;
    char pad6c[8];
    void* m_field74;
    char pad78[8];
    void* m_field80;
    char pad84[0xc];
    void* m_field90;
};

struct CXTPResourceManager {
    void* GetResource(int);
};

extern "C" void* __stdcall sub_66aaa0();
extern "C" CXTPResourceManager* __stdcall sub_668f70();
extern "C" void* __stdcall sub_6303d0();
extern "C" void __stdcall sub_69ed50(void*, void*, void*);

void CXTPPropertyGridPaintManager::Init()
{
    sub_66aaa0();
    CXTPResourceManager* rm = sub_668f70();
    void* res = rm->GetResource(0xf);
    m_pField38 = res;
    rm = sub_668f70();
    res = rm->GetResource(0x10);
    m_pField3c = res;
    rm = sub_668f70();
    res = rm->GetResource(2);
    CXTPPropertyGrid* grid = (CXTPPropertyGrid*)m_pGrid;
    grid->m_field90 = res;
    grid->m_field38 = m_pField38;
    rm = sub_668f70();
    res = rm->GetResource(0x12);
    grid = (CXTPPropertyGrid*)m_pGrid;
    grid->m_field44 = res;
    grid->m_field50 = (void*)GetSysColor(0);
    rm = sub_668f70();
    res = rm->GetResource(0x11);
    grid = (CXTPPropertyGrid*)m_pGrid;
    grid->m_field68 = res;
    rm = sub_668f70();
    res = rm->GetResource(5);
    grid = (CXTPPropertyGrid*)m_pGrid;
    grid->m_field74 = res;
    rm = sub_668f70();
    res = rm->GetResource(8);
    grid = (CXTPPropertyGrid*)m_pGrid;
    grid->m_field5c = res;
    rm = sub_668f70();
    res = rm->GetResource(0x11);
    grid = (CXTPPropertyGrid*)m_pGrid;
    grid->m_field80 = res;
    void* obj = sub_6303d0();
    void* result = 0;
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        void* (*fn)(void*) = (void* (*)(void*))vtbl[0x1f];
        void* r = fn(obj);
        if (r != 0) {
            obj = sub_6303d0();
            if (obj != 0) {
                vtbl = *(void***)obj;
                fn = (void* (*)(void*))vtbl[0x1f];
                r = fn(obj);
                if (r != 0) {
                    result = *(void**)((char*)r + 0x20);
                }
            }
        }
    }
    sub_69ed50(m_field8, result, (void*)0x7ca820);
    sub_69ed50(m_field10, result, (void*)0x7c652c);
    sub_69ed50(m_field18, result, (void*)0x7d72e4);
}
