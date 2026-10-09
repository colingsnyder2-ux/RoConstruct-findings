// roc 2009-12 00877590  unit: CXTPControlGallery  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877590
//
// 00877590  56                   push esi
// 00877591  8bf1                 mov esi, ecx
// 00877593  e828feffff           call 0x8773c0
// 00877598  85c0                 test eax, eax
// 0087759a  7404                 je 0x8775a0
// 0087759c  33c0                 xor eax, eax
// 0087759e  5e                   pop esi
// 0087759f  c3                   ret 
// 008775a0  8b06                 mov eax, dword ptr [esi]
// 008775a2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008775a5  8bce                 mov ecx, esi
// 008775a7  5e                   pop esi
// 008775a8  ffe2                 jmp edx
// copied from an identical function in another client (function ?fn_ROCX000038@CXTPControlGallery@ns_ROCX000038@ns_ROCX000036@@QAEHXZ)

namespace ns_ROCX000038 {
extern char G;

char* fn_ROCX000038()
{
    return &G;
}
}
