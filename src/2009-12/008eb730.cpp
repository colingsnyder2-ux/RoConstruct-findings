// roc 2009-12 008eb730  unit: CXTPScrollBase  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb730
//
// 008eb730  56                   push esi
// 008eb731  8bf1                 mov esi, ecx
// 008eb733  e8c8ffffff           call 0x8eb700
// 008eb738  85c0                 test eax, eax
// 008eb73a  7404                 je 0x8eb740
// 008eb73c  33c0                 xor eax, eax
// 008eb73e  5e                   pop esi
// 008eb73f  c3                   ret 
// 008eb740  8b460c               mov eax, dword ptr [esi + 0xc]
// 008eb743  85c0                 test eax, eax
// 008eb745  7437                 je 0x8eb77e
// 008eb747  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 008eb74e  742e                 je 0x8eb77e
// 008eb750  83b83c02000000       cmp dword ptr [eax + 0x23c], 0
// 008eb757  7425                 je 0x8eb77e
// 008eb759  83b80001000000       cmp dword ptr [eax + 0x100], 0
// 008eb760  751c                 jne 0x8eb77e
// 008eb762  6a00                 push 0
// 008eb764  8bce                 mov ecx, esi
// 008eb766  e845ffffff           call 0x8eb6b0
// 008eb76b  2500000060           and eax, 0x60000000
// 008eb770  33c9                 xor ecx, ecx
// 008eb772  3d00000060           cmp eax, 0x60000000
// 008eb777  0f94c1               sete cl
// 008eb77a  5e                   pop esi
// 008eb77b  8bc1                 mov eax, ecx
// 008eb77d  c3                   ret 
// 008eb77e  b801000000           mov eax, 1
// 008eb783  5e                   pop esi
// 008eb784  c3                   ret 
// copied from an identical function in another client (function ?sub_7167b0@CXTPRibbonTabContextHeader@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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