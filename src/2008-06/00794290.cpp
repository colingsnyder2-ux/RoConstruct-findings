// roc 2008-06 00794290  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794290
//
// 00794290  56                   push esi
// 00794291  6a00                 push 0
// 00794293  8bf1                 mov esi, ecx
// 00794295  e8a6ffffff           call 0x794240
// 0079429a  a900000001           test eax, 0x1000000
// 0079429f  7414                 je 0x7942b5
// 007942a1  6a01                 push 1
// 007942a3  8bce                 mov ecx, esi
// 007942a5  e896ffffff           call 0x794240
// 007942aa  a840                 test al, 0x40
// 007942ac  7407                 je 0x7942b5
// 007942ae  b801000000           mov eax, 1
// 007942b3  5e                   pop esi
// 007942b4  c3                   ret 
// 007942b5  33c0                 xor eax, eax
// 007942b7  5e                   pop esi
// 007942b8  c3                   ret 
// copied from an identical function in another client (function ?IsSomething@CXTPRibbonTabContextHeader@ns_ROCX000034@@QAEHXZ)

namespace ns_ROCX000034 {
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
