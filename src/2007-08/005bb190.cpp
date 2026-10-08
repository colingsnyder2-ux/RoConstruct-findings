// from server: 72% by colin
// roc 2007-08 005bb190  unit: RBX::P8PVInstance::?$SetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb190
//
// 005bb190  8b442404             mov eax, dword ptr [esp + 4]
// 005bb194  85c0                 test eax, eax
// 005bb196  8bd1                 mov edx, ecx
// 005bb198  7405                 je 0x5bb19f
// 005bb19a  83c0fc               add eax, -4
// 005bb19d  eb02                 jmp 0x5bb1a1
// 005bb19f  33c0                 xor eax, eax
// 005bb1a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bb1a5  56                   push esi
// 005bb1a6  8b7210               mov esi, dword ptr [edx + 0x10]
// 005bb1a9  51                   push ecx
// 005bb1aa  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 005bb1b0  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005bb1b3  034a0c               add ecx, dword ptr [edx + 0xc]
// 005bb1b6  8b5208               mov edx, dword ptr [edx + 8]
// 005bb1b9  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 005bb1c0  ffd2                 call edx
// 005bb1c2  5e                   pop esi
// 005bb1c3  c20800               ret 8

struct RBX_P8PVInstance_SetImpl
{
    char pad_0[8];
    int field_8;
    int field_c;
    int field_10;
    void method(int, int);
};

void RBX_P8PVInstance_SetImpl::method(int a, int b)
{
    int v = a;
    if (v != 0)
        v -= 4;
    else
        v = 0;

    int idx = field_10;
    int *p = *(int **)(v + 0xec);
    int off = p[idx] + field_c;
    void (__stdcall *fn)(int) = (void (__stdcall *)(int))field_8;
    fn(off + v + 0xec);
}
