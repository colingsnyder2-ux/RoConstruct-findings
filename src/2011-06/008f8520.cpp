// roc 2011-06 008f8520  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8520
//
// 008f8520  56                   push esi
// 008f8521  6a00                 push 0
// 008f8523  8bf1                 mov esi, ecx
// 008f8525  e8a6ffffff           call 0x8f84d0
// 008f852a  a900000001           test eax, 0x1000000
// 008f852f  7414                 je 0x8f8545
// 008f8531  6a01                 push 1
// 008f8533  8bce                 mov ecx, esi
// 008f8535  e896ffffff           call 0x8f84d0
// 008f853a  a840                 test al, 0x40
// 008f853c  7407                 je 0x8f8545
// 008f853e  b801000000           mov eax, 1
// 008f8543  5e                   pop esi
// 008f8544  c3                   ret 
// 008f8545  33c0                 xor eax, eax
// 008f8547  5e                   pop esi
// 008f8548  c3                   ret 
// copied from an identical function in another client (function ?IsSomething@CXTPRibbonTabContextHeader@ns_ROCX000065@@QAEHXZ)

namespace ns_ROCX000065 {
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
