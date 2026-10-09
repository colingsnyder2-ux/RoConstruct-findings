// roc 2010-06 007b8690  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8690
//
// 007b8690  56                   push esi
// 007b8691  8bf1                 mov esi, ecx
// 007b8693  8b8664010000         mov eax, dword ptr [esi + 0x164]
// 007b8699  85c0                 test eax, eax
// 007b869b  7538                 jne 0x7b86d5
// 007b869d  e82effffff           call 0x7b85d0
// 007b86a2  85c0                 test eax, eax
// 007b86a4  7408                 je 0x7b86ae
// 007b86a6  8bc8                 mov ecx, eax
// 007b86a8  5e                   pop esi
// 007b86a9  e912010100           jmp 0x7c87c0
// 007b86ae  8bce                 mov ecx, esi
// 007b86b0  e8ebfeffff           call 0x7b85a0
// 007b86b5  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 007b86bb  85c0                 test eax, eax
// 007b86bd  7516                 jne 0x7b86d5
// 007b86bf  3905b054c200         cmp dword ptr [0xc254b0], eax
// 007b86c5  7509                 jne 0x7b86d0
// 007b86c7  50                   push eax
// 007b86c8  e8a35affff           call 0x7ae170
// 007b86cd  83c404               add esp, 4
// 007b86d0  a1b054c200           mov eax, dword ptr [0xc254b0]
// 007b86d5  5e                   pop esi
// 007b86d6  c3                   ret 
// copied from an identical function in another client (function ?getSomething@CXTPCommandBar@ns_ROCX000003@ns_ROCX000046@@QAEHXZ)

namespace ns_ROCX000003 {
extern void G1_func_0070a980();
void fn_ROCX000003()
{
    G1_func_0070a980();
}
}
