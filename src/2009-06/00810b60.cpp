// roc 2009-06 00810b60  unit: CXTPScrollBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810b60
//
// 00810b60  56                   push esi
// 00810b61  6a00                 push 0
// 00810b63  8bf1                 mov esi, ecx
// 00810b65  e8a6ffffff           call 0x810b10
// 00810b6a  a900000001           test eax, 0x1000000
// 00810b6f  7414                 je 0x810b85
// 00810b71  6a01                 push 1
// 00810b73  8bce                 mov ecx, esi
// 00810b75  e896ffffff           call 0x810b10
// 00810b7a  a840                 test al, 0x40
// 00810b7c  7407                 je 0x810b85
// 00810b7e  b801000000           mov eax, 1
// 00810b83  5e                   pop esi
// 00810b84  c3                   ret 
// 00810b85  33c0                 xor eax, eax
// 00810b87  5e                   pop esi
// 00810b88  c3                   ret 
// copied from an identical function in another client (function ?IsSomething@CXTPRibbonTabContextHeader@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX00000a {
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
