// from server: 52% by atomic.potato
// roc 2011-06 00459d40  unit: VCRoblox3D::?$CComObject  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00459d40
//
// 00459d40  56                   push esi
// 00459d41  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00459d45  85f6                 test esi, esi
// 00459d47  743a                 je 0x459d83
// 00459d49  8b542420             mov edx, dword ptr [esp + 0x20]
// 00459d4d  85d2                 test edx, edx
// 00459d4f  7432                 je 0x459d83
// 00459d51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00459d55  b805400080           mov eax, 0x80004005
// 00459d5a  85c9                 test ecx, ecx
// 00459d5c  7405                 je 0x459d63
// 00459d5e  83c1ec               add ecx, -0x14
// 00459d61  eb02                 jmp 0x459d65
// 00459d63  33c9                 xor ecx, ecx
// 00459d65  837c240c01           cmp dword ptr [esp + 0xc], 1
// 00459d6a  751c                 jne 0x459d88
// 00459d6c  837e0400             cmp dword ptr [esi + 4], 0
// 00459d70  7516                 jne 0x459d88
// 00459d72  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459d75  8902                 mov dword ptr [edx], eax
// 00459d77  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00459d7a  894a04               mov dword ptr [edx + 4], ecx
// 00459d7d  33c0                 xor eax, eax
// 00459d7f  5e                   pop esi
// 00459d80  c21c00               ret 0x1c
// 00459d83  b803400080           mov eax, 0x80004003
// 00459d88  5e                   pop esi
// 00459d89  c21c00               ret 0x1c

struct S_func_00459d40 {
    char pad0[0x58];
    int field_58;
    int field_5c;
};

int __stdcall func_00459d40(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int *p = (int *)a5;
    int *q = (int *)a6;
    if (p == 0 || q == 0)
        return (int)0x80004003;
    S_func_00459d40 *obj;
    if (a1 == 0)
        obj = 0;
    else
        obj = (S_func_00459d40 *)((char *)a1 - 0x14);
    if (a2 != 1)
        return (int)0x80004005;
    if (*(int *)((char *)p + 4) != 0)
        return (int)0x80004005;
    q[0] = obj->field_58;
    q[1] = obj->field_5c;
    return 0;
}
