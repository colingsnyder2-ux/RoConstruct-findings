// from server: 100% by colin
// roc 2007-08 00677390  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677390
//
// 00677390  8b0dac868c00         mov ecx, dword ptr [0x8c86ac]
// 00677396  e89191fbff           call 0x63052c
// 0067739b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067739f  898800010000         mov dword ptr [eax + 0x100], ecx
// 006773a5  c3                   ret 

struct Inner {
    char pad[0x100];
    int value;
};

struct Outer {
    Inner* method();
};

extern Outer* g_8c86ac;

void func_00677390(int v)
{
    Inner* p = g_8c86ac->method();
    p->value = v;
}
