// roc 2009-06 0079c610  unit: CXTPControlGallery  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c610
//
// 0079c610  56                   push esi
// 0079c611  8bf1                 mov esi, ecx
// 0079c613  e828feffff           call 0x79c440
// 0079c618  85c0                 test eax, eax
// 0079c61a  7404                 je 0x79c620
// 0079c61c  33c0                 xor eax, eax
// 0079c61e  5e                   pop esi
// 0079c61f  c3                   ret 
// 0079c620  8b06                 mov eax, dword ptr [esi]
// 0079c622  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0079c625  8bce                 mov ecx, esi
// 0079c627  5e                   pop esi
// 0079c628  ffe2                 jmp edx
// copied from an identical function in another client (function ?fn_ROCX000038@CXTPControlGallery@ns_ROCX000038@ns_ROCX00001d@@QAEHXZ)

namespace ns_ROCX000038 {
extern void G1_func_0074d250();
void fn_ROCX000038()
{
    G1_func_0074d250();
}
}
