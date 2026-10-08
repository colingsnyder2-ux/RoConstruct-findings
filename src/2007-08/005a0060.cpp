// from server: 73% by colin
// roc 2007-08 005a0060  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0060
//
// 005a0060  8b442404             mov eax, dword ptr [esp + 4]
// 005a0064  85c0                 test eax, eax
// 005a0066  8bd1                 mov edx, ecx
// 005a0068  7405                 je 0x5a006f
// 005a006a  83c0fc               add eax, -4
// 005a006d  eb02                 jmp 0x5a0071
// 005a006f  33c0                 xor eax, eax
// 005a0071  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a0075  8b09                 mov ecx, dword ptr [ecx]
// 005a0077  56                   push esi
// 005a0078  8b7220               mov esi, dword ptr [edx + 0x20]
// 005a007b  51                   push ecx
// 005a007c  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 005a0082  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005a0085  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005a0088  8b5218               mov edx, dword ptr [edx + 0x18]
// 005a008b  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 005a0092  ffd2                 call edx
// 005a0094  5e                   pop esi
// 005a0095  c20800               ret 8

struct P8ModelInstance {
    char pad[0x18];
    int field18;
    int field1c;
    int field20;
    void GetSetImpl(int*, int*);
};

void P8ModelInstance::GetSetImpl(int* a, int* b) {
    char* p = (char*)a;
    if (p) p -= 4;
    else p = 0;
    int idx = *b;
    int off = *(int*)(p + 0xec);
    int val = *(int*)(off + field20);
    val += field1c;
    int (*fn)(void*, int) = (int (*)(void*, int))field18;
    fn(p + 0xec + val, idx);
}
