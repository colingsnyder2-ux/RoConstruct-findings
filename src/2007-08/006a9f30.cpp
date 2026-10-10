// from server: 84% by colin
struct CXTPRibbonBar;

struct QWidget {
    char pad0[0x178];
    void* m_vtable_178;
};

struct CXTPRibbonBar {
    char pad0[0x264];
    QWidget* m_pWidget264;
    char pad1[0x288 - 0x264 - 4];
    int m_nValue288;
    void SetValue(int n);
};

extern "C" void* __stdcall sub_00643980();
extern "C" void __fastcall sub_00633c70(void* p);
extern "C" int __fastcall sub_006a7a50(CXTPRibbonBar* p);
extern "C" void __stdcall sub_006a8ce0(int n);
extern "C" void* __fastcall sub_006fe940(void* p, int a, int b);

void CXTPRibbonBar::SetValue(int n)
{
    if (m_nValue288 == n)
        return;
    m_nValue288 = n;
    void* p = sub_00643980();
    sub_00633c70(p);
    if (m_nValue288 == 0) {
        if (sub_006a7a50(this) == 0) {
            QWidget* w = m_pWidget264;
            void* vt = w->m_vtable_178;
            void* r = sub_006fe940((char*)w + 0x178, -1, 1);
            void* fn = *(void**)((char*)vt + 0x20);
            ((void (__fastcall*)(void*, void*))fn)((char*)m_pWidget264 + 0x178, r);
            void** vtable = *(void***)this;
            void* f = vtable[0x17c / 4];
            ((void (__fastcall*)(CXTPRibbonBar*))f)(this);
            return;
        }
        if (m_nValue288 == 0) {
            int r = sub_006a7a50(this);
            sub_006a8ce0(r);
            void** vtable = *(void***)this;
            void* f = vtable[0x17c / 4];
            ((void (__fastcall*)(CXTPRibbonBar*))f)(this);
            return;
        }
    }
    if (n != 0) {
        QWidget* w = m_pWidget264;
        void* vt = w->m_vtable_178;
        void* fn = *(void**)((char*)vt + 0x20);
        ((void (__fastcall*)(void*, int))fn)((char*)m_pWidget264 + 0x178, 0);
    }
    void** vtable = *(void***)this;
    void* f = vtable[0x17c / 4];
    ((void (__fastcall*)(CXTPRibbonBar*))f)(this);
}
