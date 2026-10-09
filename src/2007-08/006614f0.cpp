// from server: 67% by colin
// roc 2007-08 006614f0  unit: CXTPReportHeader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006614f0
//
// 006614f0  83ec08               sub esp, 8
// 006614f3  56                   push esi
// 006614f4  8bf1                 mov esi, ecx
// 006614f6  8b4624               mov eax, dword ptr [esi + 0x24]
// 006614f9  83b86801000001       cmp dword ptr [eax + 0x168], 1
// 00661500  752f                 jne 0x661531
// 00661502  8b442410             mov eax, dword ptr [esp + 0x10]
// 00661506  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066150a  8b16                 mov edx, dword ptr [esi]
// 0066150c  89442404             mov dword ptr [esp + 4], eax
// 00661510  2b8690000000         sub eax, dword ptr [esi + 0x90]
// 00661516  51                   push ecx
// 00661517  83e801               sub eax, 1
// 0066151a  50                   push eax
// 0066151b  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00661521  8bce                 mov ecx, esi
// 00661523  ffd0                 call eax
// 00661525  85c0                 test eax, eax
// 00661527  7408                 je 0x661531
// 00661529  50                   push eax
// 0066152a  8bce                 mov ecx, esi
// 0066152c  e82ffdffff           call 0x661260
// 00661531  5e                   pop esi
// 00661532  83c408               add esp, 8
// 00661535  c20800               ret 8

struct CXTPReportHeader {
    void f(int, int);
};

struct Inner {
    char pad[0x168];
    int field_168;
};

struct Outer {
    char pad[0x24];
    Inner* p24;
};

struct Vtbl {
    char pad[0x80];
    int (__stdcall *fn80)(int, int);
};

void CXTPReportHeader::f(int a, int b)
{
    Inner* inner = ((Outer*)this)->p24;
    if (inner->field_168 == 1)
    {
        int v = a;
        int w = b;
        Vtbl* vt = *(Vtbl**)this;
        int arg = v - *(int*)((char*)this + 0x90) - 1;
        int r = vt->fn80(arg, w);
        if (r != 0)
        {
            ((void (__thiscall*)(CXTPReportHeader*, int))0x661260)(this, r);
        }
    }
}
