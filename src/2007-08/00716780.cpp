// from server: 100% by colin
// roc 2007-08 00716780  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716780
//
// 00716780  56                   push esi
// 00716781  6a00                 push 0
// 00716783  8bf1                 mov esi, ecx
// 00716785  e8a6ffffff           call 0x716730
// 0071678a  a900000001           test eax, 0x1000000
// 0071678f  7414                 je 0x7167a5
// 00716791  6a01                 push 1
// 00716793  8bce                 mov ecx, esi
// 00716795  e896ffffff           call 0x716730
// 0071679a  a840                 test al, 0x40
// 0071679c  7407                 je 0x7167a5
// 0071679e  b801000000           mov eax, 1
// 007167a3  5e                   pop esi
// 007167a4  c3                   ret 
// 007167a5  33c0                 xor eax, eax
// 007167a7  5e                   pop esi
// 007167a8  c3                   ret 

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
