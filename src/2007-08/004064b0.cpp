// from server: 56% by colin
struct VCWorkspace_CComObject {
    void method(int, int, int, int, int, int, int, int, int);
};

extern void* g_880df0;
extern int g_880df8;
extern char g_880de4;

extern "C" void __stdcall sub_4055f0(int);

void VCWorkspace_CComObject::method(int a1, int, int, int, int, int, int, int, int a9)
{
    void* p = g_880df0;
    if (p == 0 || g_880df8 == 0)
    {
        sub_4055f0(a9);
        p = g_880df0;
    }
    if (p != 0)
    {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(int, int, int, int, int, int, int, int) =
            (void (__stdcall *)(int, int, int, int, int, int, int, int))vtbl[11];
        fn(a1, a1, a1, a1, a1, a1, a1, a1);
    }
}
