// from server: 53% by colin
struct CXTPCustomizeSheet {
    char pad[0x20];
    void* m_pSomething;
    int Func(int, int);
};

extern "C" void* __stdcall GetCapture();
extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall GetForegroundWindow();
extern "C" void* __stdcall GetParent(void*);

extern "C" void* __stdcall sub_673660();
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void* __stdcall sub_6301f0(void*, void*);
extern "C" void* __stdcall sub_643630();

int CXTPCustomizeSheet::Func(int, int)
{
    void* (__stdcall *pfnCapture)() = GetCapture;
    void* (__stdcall *pfnFocus)() = GetFocus;

    pfnCapture();

    void* p = m_pSomething;
    if (sub_673660())
        return 1;

    pfnCapture();

    void* a = sub_6301c0(pfnFocus());
    if (a)
    {
        void* b = sub_6301c0(GetParent(*(void**)((char*)a + 0x20)));
        if (b)
        {
            void* c = sub_643630();
            if (sub_6301f0(b, c))
                return 1;
        }
    }

    if (pfnFocus())
    {
        void* d = pfnCapture();
        void* e = pfnFocus();
        if (sub_673660())
            return 1;
    }

    return GetForegroundWindow() != 0;
}
