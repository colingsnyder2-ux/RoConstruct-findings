// from server: 100% by tester
// roc 2008-06 007942c0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007942c0
//
// 007942c0  56                   push esi
// 007942c1  8bf1                 mov esi, ecx
// 007942c3  e8c8ffffff           call 0x794290
// 007942c8  85c0                 test eax, eax
// 007942ca  7404                 je 0x7942d0
// 007942cc  33c0                 xor eax, eax
// 007942ce  5e                   pop esi
// 007942cf  c3                   ret 
// 007942d0  8b460c               mov eax, dword ptr [esi + 0xc]
// 007942d3  85c0                 test eax, eax
// 007942d5  7437                 je 0x79430e
// 007942d7  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 007942de  742e                 je 0x79430e
// 007942e0  83b83c02000000       cmp dword ptr [eax + 0x23c], 0
// 007942e7  7425                 je 0x79430e
// 007942e9  83b80001000000       cmp dword ptr [eax + 0x100], 0
// 007942f0  751c                 jne 0x79430e
// 007942f2  6a00                 push 0
// 007942f4  8bce                 mov ecx, esi
// 007942f6  e845ffffff           call 0x794240
// 007942fb  2500000060           and eax, 0x60000000
// 00794300  33c9                 xor ecx, ecx
// 00794302  3d00000060           cmp eax, 0x60000000
// 00794307  0f94c1               sete cl
// 0079430a  5e                   pop esi
// 0079430b  8bc1                 mov eax, ecx
// 0079430d  c3                   ret 
// 0079430e  b801000000           mov eax, 1
// 00794313  5e                   pop esi
// 00794314  c3                   ret 

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
