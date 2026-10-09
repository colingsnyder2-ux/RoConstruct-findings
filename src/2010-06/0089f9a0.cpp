// roc 2010-06 0089f9a0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f9a0
//
// 0089f9a0  56                   push esi
// 0089f9a1  6a00                 push 0
// 0089f9a3  8bf1                 mov esi, ecx
// 0089f9a5  e8a6ffffff           call 0x89f950
// 0089f9aa  a900000001           test eax, 0x1000000
// 0089f9af  7414                 je 0x89f9c5
// 0089f9b1  6a01                 push 1
// 0089f9b3  8bce                 mov ecx, esi
// 0089f9b5  e896ffffff           call 0x89f950
// 0089f9ba  a840                 test al, 0x40
// 0089f9bc  7407                 je 0x89f9c5
// 0089f9be  b801000000           mov eax, 1
// 0089f9c3  5e                   pop esi
// 0089f9c4  c3                   ret 
// 0089f9c5  33c0                 xor eax, eax
// 0089f9c7  5e                   pop esi
// 0089f9c8  c3                   ret 
// copied from an identical function in another client (function ?IsSomething@CXTPRibbonTabContextHeader@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
struct CXTPRibbonTabContextHeader
{
    int GetFlag(int index);
    int IsSomething();
};

int CXTPRibbonTabContextHeader::IsSomething()
{
    if ((GetFlag(0) & 0x1000000) != 0)
    {
        if ((GetFlag(1) & 0x40) != 0)
            return 1;
    }
    return 0;
}
}
