// from server: 100% by colin
// roc 2007-08 007167b0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007167b0
//
// 007167b0  56                   push esi
// 007167b1  8bf1                 mov esi, ecx
// 007167b3  e8c8ffffff           call 0x716780
// 007167b8  85c0                 test eax, eax
// 007167ba  7404                 je 0x7167c0
// 007167bc  33c0                 xor eax, eax
// 007167be  5e                   pop esi
// 007167bf  c3                   ret 
// 007167c0  8b460c               mov eax, dword ptr [esi + 0xc]
// 007167c3  85c0                 test eax, eax
// 007167c5  7437                 je 0x7167fe
// 007167c7  83b8d800000000       cmp dword ptr [eax + 0xd8], 0
// 007167ce  742e                 je 0x7167fe
// 007167d0  83b83802000000       cmp dword ptr [eax + 0x238], 0
// 007167d7  7425                 je 0x7167fe
// 007167d9  83b8fc00000000       cmp dword ptr [eax + 0xfc], 0
// 007167e0  751c                 jne 0x7167fe
// 007167e2  6a00                 push 0
// 007167e4  8bce                 mov ecx, esi
// 007167e6  e845ffffff           call 0x716730
// 007167eb  2500000060           and eax, 0x60000000
// 007167f0  33c9                 xor ecx, ecx
// 007167f2  3d00000060           cmp eax, 0x60000000
// 007167f7  0f94c1               sete cl
// 007167fa  5e                   pop esi
// 007167fb  8bc1                 mov eax, ecx
// 007167fd  c3                   ret 
// 007167fe  b801000000           mov eax, 1
// 00716803  5e                   pop esi
// 00716804  c3                   ret 

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
        if (*(int*)(p + 0xd8) != 0)
        {
            if (*(int*)(p + 0x238) != 0)
            {
                if (*(int*)(p + 0xfc) == 0)
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
