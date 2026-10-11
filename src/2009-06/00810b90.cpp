// from server: 100% by tester
// roc 2009-06 00810b90  unit: CXTPScrollBase  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810b90
//
// 00810b90  56                   push esi
// 00810b91  8bf1                 mov esi, ecx
// 00810b93  e8c8ffffff           call 0x810b60
// 00810b98  85c0                 test eax, eax
// 00810b9a  7404                 je 0x810ba0
// 00810b9c  33c0                 xor eax, eax
// 00810b9e  5e                   pop esi
// 00810b9f  c3                   ret 
// 00810ba0  8b460c               mov eax, dword ptr [esi + 0xc]
// 00810ba3  85c0                 test eax, eax
// 00810ba5  7437                 je 0x810bde
// 00810ba7  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 00810bae  742e                 je 0x810bde
// 00810bb0  83b83c02000000       cmp dword ptr [eax + 0x23c], 0
// 00810bb7  7425                 je 0x810bde
// 00810bb9  83b80001000000       cmp dword ptr [eax + 0x100], 0
// 00810bc0  751c                 jne 0x810bde
// 00810bc2  6a00                 push 0
// 00810bc4  8bce                 mov ecx, esi
// 00810bc6  e845ffffff           call 0x810b10
// 00810bcb  2500000060           and eax, 0x60000000
// 00810bd0  33c9                 xor ecx, ecx
// 00810bd2  3d00000060           cmp eax, 0x60000000
// 00810bd7  0f94c1               sete cl
// 00810bda  5e                   pop esi
// 00810bdb  8bc1                 mov eax, ecx
// 00810bdd  c3                   ret 
// 00810bde  b801000000           mov eax, 1
// 00810be3  5e                   pop esi
// 00810be4  c3                   ret 

struct CXTPRibbonTabContextHeader
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;

    int sub_716780();
    int sub_716730(int);
    int sub_7167b0();
};

int CXTPRibbonTabContextHeader::sub_7167b0()
{
    if (sub_716780() != 0)
        return 0;

    int p = field_c;
    if (p != 0)
    {
        if (*(int*)(p + 0xdc) != 0)
        {
            if (*(int*)(p + 0x23c) != 0)
            {
                if (*(int*)(p + 0x100) == 0)
                {
                    int r = sub_716730(0);
                    r &= 0x60000000;
                    return r == 0x60000000;
                }
            }
        }
    }
    return 1;
}
