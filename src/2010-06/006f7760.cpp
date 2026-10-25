// from server: 100% by tester
// roc 2010-06 006f7760  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7760
//
// 006f7760  8b442404             mov eax, dword ptr [esp + 4]
// 006f7764  8bd1                 mov edx, ecx
// 006f7766  85c0                 test eax, eax
// 006f7768  7405                 je 0x6f776f
// 006f776a  83c0e4               add eax, -0x1c
// 006f776d  eb02                 jmp 0x6f7771
// 006f776f  33c0                 xor eax, eax
// 006f7771  51                   push ecx
// 006f7772  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f7776  d901                 fld dword ptr [ecx]
// 006f7778  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 006f777b  8b5210               mov edx, dword ptr [edx + 0x10]
// 006f777e  d91c24               fstp dword ptr [esp]
// 006f7781  03c8                 add ecx, eax
// 006f7783  ffd2                 call edx
// 006f7785  c20800               ret 8

struct S
{
    int vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;

    void f(void *, float *);
};

void S::f(void *p, float *value)
{
    int x = p ? (int)((char *)p - 28) : 0;
    float v = *value;
    void (__thiscall *fn)(int, float) = (void (__thiscall *)(int, float))field10;
    fn(field14 + x, v);
}
