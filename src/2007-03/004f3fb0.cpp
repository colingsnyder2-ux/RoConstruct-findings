// roc 2007-03 004f3fb0  unit: seg_004f0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3fb0
//
// 004f3fb0  6aff                 push -1
// 004f3fb2  688efa7400           push 0x74fa8e
// 004f3fb7  64a100000000         mov eax, dword ptr fs:[0]
// 004f3fbd  50                   push eax
// 004f3fbe  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f3fc3  33c4                 xor eax, esp
// 004f3fc5  50                   push eax
// 004f3fc6  8d442404             lea eax, [esp + 4]
// 004f3fca  64a300000000         mov dword ptr fs:[0], eax
// 004f3fd0  e8cbf7ffff           call 0x4f37a0
// 004f3fd5  b801000000           mov eax, 1
// 004f3fda  8405e0ad8b00         test byte ptr [0x8bade0], al
// 004f3fe0  752b                 jne 0x4f400d
// 004f3fe2  0905e0ad8b00         or dword ptr [0x8bade0], eax
// 004f3fe8  6868a58b00           push 0x8ba568
// 004f3fed  b9c4ad8b00           mov ecx, 0x8badc4
// 004f3ff2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f3ffa  ff1578e77700         call dword ptr [0x77e778]
// 004f4000  68d0927700           push 0x7792d0
// 004f4005  e8a9b11200           call 0x61f1b3
// 004f400a  83c404               add esp, 4
// 004f400d  b8c4ad8b00           mov eax, 0x8badc4
// 004f4012  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f4016  64890d00000000       mov dword ptr fs:[0], ecx
// 004f401d  59                   pop ecx
// 004f401e  83c40c               add esp, 0xc
// 004f4021  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
