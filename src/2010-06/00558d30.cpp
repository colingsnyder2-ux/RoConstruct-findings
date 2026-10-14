// roc 2010-06 00558d30  unit: seg_00550000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558d30
//
// 00558d30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00558d34  83ec0c               sub esp, 0xc
// 00558d37  85c9                 test ecx, ecx
// 00558d39  770f                 ja 0x558d4a
// 00558d3b  33c9                 xor ecx, ecx
// 00558d3d  51                   push ecx
// 00558d3e  e85dec2400           call 0x7a79a0
// 00558d43  83c404               add esp, 4
// 00558d46  83c40c               add esp, 0xc
// 00558d49  c3                   ret 
// 00558d4a  83c8ff               or eax, 0xffffffff
// 00558d4d  33d2                 xor edx, edx
// 00558d4f  f7f1                 div ecx
// 00558d51  83f801               cmp eax, 1
// 00558d54  73e7                 jae 0x558d3d
// 00558d56  8d442410             lea eax, [esp + 0x10]
// 00558d5a  50                   push eax
// 00558d5b  8d4c2404             lea ecx, [esp + 4]
// 00558d5f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00558d67  ff1524a99e00         call dword ptr [0x9ea924]
// 00558d6d  68b41ab000           push 0xb01ab4
// 00558d72  8d4c2404             lea ecx, [esp + 4]
// 00558d76  51                   push ecx
// 00558d77  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00558d7f  e82efc2400           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@E@std@@YAPAEIPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
