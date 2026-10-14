// roc 2010-06 00522d70  unit: RBX::MeshGen  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522d70
//
// 00522d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00522d74  83ec0c               sub esp, 0xc
// 00522d77  85c9                 test ecx, ecx
// 00522d79  7712                 ja 0x522d8d
// 00522d7b  33c9                 xor ecx, ecx
// 00522d7d  8d1409               lea edx, [ecx + ecx]
// 00522d80  52                   push edx
// 00522d81  e81a4c2800           call 0x7a79a0
// 00522d86  83c404               add esp, 4
// 00522d89  83c40c               add esp, 0xc
// 00522d8c  c3                   ret 
// 00522d8d  83c8ff               or eax, 0xffffffff
// 00522d90  33d2                 xor edx, edx
// 00522d92  f7f1                 div ecx
// 00522d94  83f802               cmp eax, 2
// 00522d97  73e4                 jae 0x522d7d
// 00522d99  8d442410             lea eax, [esp + 0x10]
// 00522d9d  50                   push eax
// 00522d9e  8d4c2404             lea ecx, [esp + 4]
// 00522da2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00522daa  ff1524a99e00         call dword ptr [0x9ea924]
// 00522db0  68b41ab000           push 0xb01ab4
// 00522db5  8d4c2404             lea ecx, [esp + 4]
// 00522db9  51                   push ecx
// 00522dba  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00522dc2  e8eb5b2800           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@G@std@@YAPAGIPAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
