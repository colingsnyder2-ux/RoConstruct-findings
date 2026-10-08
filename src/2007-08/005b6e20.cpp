// from server: 76% by colin
// roc 2007-08 005b6e20  unit: RBX::$00MP8Surface::?$SurfaceGetSet  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6e20
//
// 005b6e20  8b442404             mov eax, dword ptr [esp + 4]
// 005b6e24  85c0                 test eax, eax
// 005b6e26  56                   push esi
// 005b6e27  8bf1                 mov esi, ecx
// 005b6e29  7405                 je 0x5b6e30
// 005b6e2b  8d48fc               lea ecx, [eax - 4]
// 005b6e2e  eb02                 jmp 0x5b6e32
// 005b6e30  33c9                 xor ecx, ecx
// 005b6e32  e859cafbff           call 0x573890
// 005b6e37  8b5608               mov edx, dword ptr [esi + 8]
// 005b6e3a  51                   push ecx
// 005b6e3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b6e3f  d901                 fld dword ptr [ecx]
// 005b6e41  8bc8                 mov ecx, eax
// 005b6e43  d91c24               fstp dword ptr [esp]
// 005b6e46  ffd2                 call edx
// 005b6e48  5e                   pop esi
// 005b6e49  c20800               ret 8

struct S_func_005b6e20 {
    char pad0[8];
    int m_vtable;
    void f(int a1, int a2);
};

extern "C" int __cdecl sub_00573890(int);

void S_func_005b6e20::f(int a1, int a2)
{
    int v;
    if (a1 != 0)
        v = sub_00573890(a1 - 4);
    else
        v = sub_00573890(0);
    int (*fn)(void*, float) = (int (*)(void*, float))m_vtable;
    float fv = *(float*)a2;
    fn((void*)v, fv);
}
