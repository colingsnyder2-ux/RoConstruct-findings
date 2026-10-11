// from server: 78% by colin
// roc 2008-06 0044bea0  unit: CRobloxModule  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044bea0

extern "C" unsigned int __stdcall sub_44b6b0(int, int, const char*);

extern int (__stdcall *g_96dcfc)(int);
extern int g_97f2ac;

struct CRobloxModule {
    int f(int a, int b);
};

int CRobloxModule::f(int a, int b)
{
    if (sub_44b6b0(a, b, (const char*)0x97f340) >= 0) {
        int (__stdcall *p)(int) = g_96dcfc;
        if (p) {
            p(g_97f2ac);
        }
    }
    return 0;
}
