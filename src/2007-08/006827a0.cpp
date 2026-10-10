// from server: 58% by colin
// roc 2007-08 006827a0  unit: XTP_PRINT_STATE  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006827a0

struct XTP_PRINT_STATE {
    int field0;
    int field4;
    bool Check(int, int);
};

extern "C" void* __stdcall sub_7388fe(void*, void*);
extern "C" void __cdecl sub_62ff20();
extern "C" void* __cdecl sub_6303d0();
extern "C" int __stdcall PeekMessageA(void*, unsigned int, unsigned int, unsigned int, unsigned int);

extern void* g_77ec40;

bool XTP_PRINT_STATE::Check(int a, int b)
{
    XTP_PRINT_STATE* p = (XTP_PRINT_STATE*)sub_7388fe((void*)0x8c8f68, (void*)0x682700);
    if (p == 0)
    {
        sub_62ff20();
    }
    if (p->field4 == 0)
    {
        int (*fn)(void*, unsigned int, unsigned int, unsigned int, unsigned int) =
            (int (*)(void*, unsigned int, unsigned int, unsigned int, unsigned int))g_77ec40;
        while (fn((void*)0, 0, 0, 0, 0) != 0)
        {
            void* obj = sub_6303d0();
            int (*vf)(void*) = *(int (**)(void*))((char*)obj + 0x64);
            if (vf(obj) == 0)
            {
                return false;
            }
            if (p->field4 != 0)
            {
                break;
            }
        }
    }
    return p->field4 == 0;
}
