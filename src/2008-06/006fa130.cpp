// from server: 74% by colin
// roc 2008-06 006fa130  unit: XTP_PRINT_STATE  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa130

struct XTP_PRINT_STATE {
    int field0;
    int field4;
    int sub_6fa130(int, int);
};

extern "C" int __stdcall PeekMessageA(void*, void*, unsigned, unsigned, unsigned);

extern "C" void* __stdcall sub_7bc56e(void*, void*);
extern "C" void __stdcall sub_6a0944();
extern "C" void* __stdcall sub_6a0e4e();

extern void* g_97e918;
extern int (__stdcall *g_802db0)(unsigned, unsigned, unsigned, unsigned, void*);

int XTP_PRINT_STATE::sub_6fa130(int a, int b)
{
    char buf[0x1c];
    XTP_PRINT_STATE* p = (XTP_PRINT_STATE*)sub_7bc56e(&g_97e918, (void*)0x6fa090);
    if (p == 0)
        sub_6a0944();
    if (p->field4 == 0)
    {
        int (__stdcall *fn)(unsigned, unsigned, unsigned, unsigned, void*) = g_802db0;
        while (fn(0, 0, 0, 0, buf))
        {
            void* q = sub_6a0e4e();
            int r = (*(int (__thiscall**)(void*))(*(int*)q + 0x64))(q);
            if (r == 0)
                return 0;
            if (p->field4 != 0)
                break;
        }
    }
    return p->field4 == 0;
}
