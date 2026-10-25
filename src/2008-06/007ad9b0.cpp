// from server: 100% by tester
// roc 2008-06 007ad9b0  unit: RBX::RenderNew::Material  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad9b0
//
// 007ad9b0  83f902               cmp ecx, 2
// 007ad9b3  7d06                 jge 0x7ad9bb
// 007ad9b5  b802000000           mov eax, 2
// 007ad9ba  c3                   ret 
// 007ad9bb  b801000000           mov eax, 1
// 007ad9c0  3bc8                 cmp ecx, eax
// 007ad9c2  7e06                 jle 0x7ad9ca
// 007ad9c4  03c0                 add eax, eax
// 007ad9c6  3bc1                 cmp eax, ecx
// 007ad9c8  7cfa                 jl 0x7ad9c4
// 007ad9ca  c3                   ret 

namespace RBX {
namespace RenderNew {
int __fastcall nextPowerOfTwo(int n)
{
    if (n < 2)
        return 2;
    int result = 1;
    while (result < n)
        result += result;
    return result;
}
}
}
