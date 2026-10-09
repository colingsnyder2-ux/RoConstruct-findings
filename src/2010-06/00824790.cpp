// roc 2010-06 00824790  unit: CXTPControlGallery  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824790
//
// 00824790  56                   push esi
// 00824791  8bf1                 mov esi, ecx
// 00824793  e828feffff           call 0x8245c0
// 00824798  85c0                 test eax, eax
// 0082479a  7404                 je 0x8247a0
// 0082479c  33c0                 xor eax, eax
// 0082479e  5e                   pop esi
// 0082479f  c3                   ret 
// 008247a0  8b06                 mov eax, dword ptr [esi]
// 008247a2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008247a5  8bce                 mov ecx, esi
// 008247a7  5e                   pop esi
// 008247a8  ffe2                 jmp edx
// copied from an identical function in another client (function ?fn_ROCX000038@CXTPControlGallery@ns_ROCX000038@ns_ROCX00001b@@QAEHXZ)

namespace ns_ROCX000038 {
extern void G1_func_0074df30();
void fn_ROCX000038()
{
    G1_func_0074df30();
}
}
