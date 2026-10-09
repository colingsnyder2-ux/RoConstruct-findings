// roc 2007-03 0070f170  unit: seg_00700000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f170
//
// 0070f170  56                   push esi
// 0070f171  6a00                 push 0
// 0070f173  8bf1                 mov esi, ecx
// 0070f175  e8a6ffffff           call 0x70f120
// 0070f17a  a900000001           test eax, 0x1000000
// 0070f17f  7414                 je 0x70f195
// 0070f181  6a01                 push 1
// 0070f183  8bce                 mov ecx, esi
// 0070f185  e896ffffff           call 0x70f120
// 0070f18a  a840                 test al, 0x40
// 0070f18c  7407                 je 0x70f195
// 0070f18e  b801000000           mov eax, 1
// 0070f193  5e                   pop esi
// 0070f194  c3                   ret 
// 0070f195  33c0                 xor eax, eax
// 0070f197  5e                   pop esi
// 0070f198  c3                   ret 
// copied from an identical function in another client (function ?IsSomething@CXTPRibbonTabContextHeader@ns_ROCX00001e@@QAEHXZ)

namespace ns_ROCX00001e {
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
