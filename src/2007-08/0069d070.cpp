// from server: 72% by colin
struct CXTPPropertyGridView
{
    char pad[0x20];
    void* m_pWnd;
    char pad2[0xbc];
    void* m_pFocus;
    char pad3[0x10];
    int m_bFlag;

    int OnSomething(void* p1, void* p2, void* p3);
};

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall SetCapture(void*);

extern int __fastcall sub_69c230(void* self, void* p1, void* p2);
extern void __fastcall sub_630004(void* self);
extern void __fastcall sub_6301c0(void* p);
extern void __fastcall sub_63023e(void* self);
extern void* __fastcall sub_69bca0(void* self, void* p1, void* p2);

int CXTPPropertyGridView::OnSomething(void* p1, void* p2, void* p3)
{
    int result = sub_69c230(this, p1, p2);
    if (result == 0x100)
    {
        sub_630004(this);
        sub_6301c0(GetFocus());
        if (m_pFocus)
        {
            void** vt = *(void***)m_pFocus;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x27];
            fn(m_pFocus);
        }
        m_bFlag = 1;
        return 1;
    }

    void* p = sub_69bca0(this, p1, p2);
    if (p)
    {
        sub_630004(this);
        if (SetCapture(GetFocus()) == this)
        {
            if (sub_69bca0(this, p1, p2) == p)
            {
                void** vt = *(void***)p;
                int (__thiscall *fn)(void*, void*, void*, void*) = (int (__thiscall *)(void*, void*, void*, void*))vt[0x30];
                if (fn(p, p3, p1, p2) != 0)
                {
                    return 1;
                }
            }
        }
    }

    sub_63023e(this);
    return 0;
}
