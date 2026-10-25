// from server: 100% by tester
// roc 2011-06 0059efe0  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059efe0
//
// 0059efe0  8b442404             mov eax, dword ptr [esp + 4]
// 0059efe4  8bd1                 mov edx, ecx
// 0059efe6  85c0                 test eax, eax
// 0059efe8  7405                 je 0x59efef
// 0059efea  83c0e4               add eax, -0x1c
// 0059efed  eb02                 jmp 0x59eff1
// 0059efef  33c0                 xor eax, eax
// 0059eff1  51                   push ecx
// 0059eff2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059eff6  d901                 fld dword ptr [ecx]
// 0059eff8  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0059effb  8b5210               mov edx, dword ptr [edx + 0x10]
// 0059effe  d91c24               fstp dword ptr [esp]
// 0059f001  03c8                 add ecx, eax
// 0059f003  ffd2                 call edx
// 0059f005  c20800               ret 8

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
