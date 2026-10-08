// from server: 90% by colin
// roc 2007-08 006e0e20  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0e20
//
// 006e0e20  83b9f000000000       cmp dword ptr [ecx + 0xf0], 0
// 006e0e27  7524                 jne 0x6e0e4d
// 006e0e29  8d8158ffffff         lea eax, [ecx - 0xa8]
// 006e0e2f  85c0                 test eax, eax
// 006e0e31  741a                 je 0x6e0e4d
// 006e0e33  83782000             cmp dword ptr [eax + 0x20], 0
// 006e0e37  7414                 je 0x6e0e4d
// 006e0e39  8b442404             mov eax, dword ptr [esp + 4]
// 006e0e3d  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 006e0e43  6a00                 push 0
// 006e0e45  50                   push eax
// 006e0e46  51                   push ecx
// 006e0e47  ff15dcec7700         call dword ptr [0x77ecdc]
// 006e0e4d  c20800               ret 8

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

struct Inner
{
    char pad0[0x20];
    int field_20;
};

struct Outer
{
    char pad[0xf0];
    int field_f0;
    int method(int, int);
};

int Outer::method(int a, int b)
{
    if (this->field_f0 != 0)
        return 0;

    Inner* p = (Inner*)((char*)this - 0xa8);
    if (p == 0)
        return 0;
    if (p->field_20 == 0)
        return 0;

    int h = *(int*)((char*)this - 0x88);
    InvalidateRect((void*)h, (const void*)a, 0);
    return 0;
}
