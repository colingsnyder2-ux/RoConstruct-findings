// roc 2007-03 004f3ea0  unit: seg_004f0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3ea0
//
// 004f3ea0  6aff                 push -1
// 004f3ea2  682efa7400           push 0x74fa2e
// 004f3ea7  64a100000000         mov eax, dword ptr fs:[0]
// 004f3ead  50                   push eax
// 004f3eae  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f3eb3  33c4                 xor eax, esp
// 004f3eb5  50                   push eax
// 004f3eb6  8d442404             lea eax, [esp + 4]
// 004f3eba  64a300000000         mov dword ptr fs:[0], eax
// 004f3ec0  e8dbf8ffff           call 0x4f37a0
// 004f3ec5  b801000000           mov eax, 1
// 004f3eca  8405a0ad8b00         test byte ptr [0x8bada0], al
// 004f3ed0  752b                 jne 0x4f3efd
// 004f3ed2  0905a0ad8b00         or dword ptr [0x8bada0], eax
// 004f3ed8  68205e8900           push 0x895e20
// 004f3edd  b984ad8b00           mov ecx, 0x8bad84
// 004f3ee2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f3eea  ff1578e77700         call dword ptr [0x77e778]
// 004f3ef0  68b0927700           push 0x7792b0
// 004f3ef5  e8b9b21200           call 0x61f1b3
// 004f3efa  83c404               add esp, 4
// 004f3efd  b884ad8b00           mov eax, 0x8bad84
// 004f3f02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3f06  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3f0d  59                   pop ecx
// 004f3f0e  83c40c               add esp, 0xc
// 004f3f11  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
