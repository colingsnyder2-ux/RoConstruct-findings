// from server: 100% by colin
// roc 2007-08 00574700  unit: RBX::P8PartInstance::?$GetSetImpl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574700
//
// 00574700  8b442404             mov eax, dword ptr [esp + 4]
// 00574704  85c0                 test eax, eax
// 00574706  8bd1                 mov edx, ecx
// 00574708  7405                 je 0x57470f
// 0057470a  83c0fc               add eax, -4
// 0057470d  eb02                 jmp 0x574711
// 0057470f  33c0                 xor eax, eax
// 00574711  56                   push esi
// 00574712  8b7220               mov esi, dword ptr [edx + 0x20]
// 00574715  51                   push ecx
// 00574716  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057471a  d901                 fld dword ptr [ecx]
// 0057471c  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00574722  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00574725  d91c24               fstp dword ptr [esp]
// 00574728  034a1c               add ecx, dword ptr [edx + 0x1c]
// 0057472b  8b5218               mov edx, dword ptr [edx + 0x18]
// 0057472e  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 00574735  ffd2                 call edx
// 00574737  5e                   pop esi
// 00574738  c20800               ret 8

struct P8PartInstance_GetSetImpl {
    char pad0[0x18];
    int field18;
    int field1c;
    int field20;
    void func(int a, float *b);
};

void P8PartInstance_GetSetImpl::func(int a, float *b)
{
    int *p = (int *)a;
    if (p)
        p = (int *)((char *)p - 4);
    else
        p = 0;
    int idx = this->field20;
    int base = p[0xec / 4];
    int v = *(int *)(base + idx);
    float val = *b;
    v += this->field1c;
    void (__thiscall *fn)(int, float) = (void (__thiscall *)(int, float))this->field18;
    fn(v + (int)p + 0xec, val);
}
