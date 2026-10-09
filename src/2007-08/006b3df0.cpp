// from server: 85% by colin
// roc 2007-08 006b3df0  unit: CXTPControlGallery  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3df0
//
// 006b3df0  56                   push esi
// 006b3df1  8bf1                 mov esi, ecx
// 006b3df3  83bee801000000       cmp dword ptr [esi + 0x1e8], 0
// 006b3dfa  7540                 jne 0x6b3e3c
// 006b3dfc  e89ff7ffff           call 0x6b35a0
// 006b3e01  83f8ff               cmp eax, -1
// 006b3e04  7436                 je 0x6b3e3c
// 006b3e06  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 006b3e0d  752d                 jne 0x6b3e3c
// 006b3e0f  8b06                 mov eax, dword ptr [esi]
// 006b3e11  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006b3e14  ffd2                 call edx
// 006b3e16  85c0                 test eax, eax
// 006b3e18  7422                 je 0x6b3e3c
// 006b3e1a  6810100000           push 0x1010
// 006b3e1f  8bce                 mov ecx, esi
// 006b3e21  c7861802000001000000 mov dword ptr [esi + 0x218], 1
// 006b3e2b  e87086f8ff           call 0x63c4a0
// 006b3e30  6813100000           push 0x1013
// 006b3e35  8bce                 mov ecx, esi
// 006b3e37  e86486f8ff           call 0x63c4a0
// 006b3e3c  8bce                 mov ecx, esi
// 006b3e3e  5e                   pop esi
// 006b3e3f  e94ccafbff           jmp 0x670890

struct CXTPControlGallery
{
    char pad0[0x1e8];
    int m_field_1e8;
    char pad1[0x218 - 0x1e8 - 4];
    int m_field_218;
    int sub_6b35a0();
    void sub_63c4a0(int);
    void sub_670890();
    void f();
};

void CXTPControlGallery::f()
{
    if (m_field_1e8 != 0)
        goto end;

    if (sub_6b35a0() == -1)
        goto end;

    if (m_field_218 != 0)
        goto end;

    {
        int (__thiscall *fn)(CXTPControlGallery *) = *(int (__thiscall **)(CXTPControlGallery *))((*(int *)this) + 0x6c);
        if (fn(this) == 0)
            goto end;
    }

    m_field_218 = 1;
    sub_63c4a0(0x1010);
    sub_63c4a0(0x1013);

end:
    sub_670890();
}
