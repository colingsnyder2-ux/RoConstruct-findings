// roc 2007-03 004f3f30  unit: seg_004f0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3f30
//
// 004f3f30  6aff                 push -1
// 004f3f32  685efa7400           push 0x74fa5e
// 004f3f37  64a100000000         mov eax, dword ptr fs:[0]
// 004f3f3d  50                   push eax
// 004f3f3e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f3f43  33c4                 xor eax, esp
// 004f3f45  50                   push eax
// 004f3f46  8d442404             lea eax, [esp + 4]
// 004f3f4a  64a300000000         mov dword ptr fs:[0], eax
// 004f3f50  e84bf8ffff           call 0x4f37a0
// 004f3f55  b801000000           mov eax, 1
// 004f3f5a  8405c0ad8b00         test byte ptr [0x8badc0], al
// 004f3f60  752b                 jne 0x4f3f8d
// 004f3f62  0905c0ad8b00         or dword ptr [0x8badc0], eax
// 004f3f68  6858a18b00           push 0x8ba158
// 004f3f6d  b9a4ad8b00           mov ecx, 0x8bada4
// 004f3f72  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f3f7a  ff1578e77700         call dword ptr [0x77e778]
// 004f3f80  68c0927700           push 0x7792c0
// 004f3f85  e829b21200           call 0x61f1b3
// 004f3f8a  83c404               add esp, 4
// 004f3f8d  b8a4ad8b00           mov eax, 0x8bada4
// 004f3f92  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3f96  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3f9d  59                   pop ecx
// 004f3f9e  83c40c               add esp, 0xc
// 004f3fa1  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
