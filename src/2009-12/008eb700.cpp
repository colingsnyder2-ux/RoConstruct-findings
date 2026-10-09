// roc 2009-12 008eb700  unit: CXTPScrollBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb700
//
// 008eb700  56                   push esi
// 008eb701  6a00                 push 0
// 008eb703  8bf1                 mov esi, ecx
// 008eb705  e8a6ffffff           call 0x8eb6b0
// 008eb70a  a900000001           test eax, 0x1000000
// 008eb70f  7414                 je 0x8eb725
// 008eb711  6a01                 push 1
// 008eb713  8bce                 mov ecx, esi
// 008eb715  e896ffffff           call 0x8eb6b0
// 008eb71a  a840                 test al, 0x40
// 008eb71c  7407                 je 0x8eb725
// 008eb71e  b801000000           mov eax, 1
// 008eb723  5e                   pop esi
// 008eb724  c3                   ret 
// 008eb725  33c0                 xor eax, eax
// 008eb727  5e                   pop esi
// 008eb728  c3                   ret 
// copied from an identical function in another client (function ?IsSomething@CXTPRibbonTabContextHeader@ns_ROCX000018@@QAEHXZ)

namespace ns_ROCX000018 {
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
