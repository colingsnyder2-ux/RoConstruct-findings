// roc 2007-08 0056da70  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056da70
//
// 0056da70  64a100000000         mov eax, dword ptr fs:[0]
// 0056da76  6aff                 push -1
// 0056da78  68ae4a7500           push 0x754aae
// 0056da7d  50                   push eax
// 0056da7e  b801000000           mov eax, 1
// 0056da83  64892500000000       mov dword ptr fs:[0], esp
// 0056da8a  8405d8248c00         test byte ptr [0x8c24d8], al
// 0056da90  752f                 jne 0x56dac1
// 0056da92  0905d8248c00         or dword ptr [0x8c24d8], eax
// 0056da98  68b4998900           push 0x8999b4
// 0056da9d  68e89f7a00           push 0x7a9fe8
// 0056daa2  b9c8248c00           mov ecx, 0x8c24c8
// 0056daa7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056daaf  e84cebffff           call 0x56c600
// 0056dab4  68a09e7700           push 0x779ea0
// 0056dab9  e865320c00           call 0x630d23
// 0056dabe  83c404               add esp, 4
// 0056dac1  8b0c24               mov ecx, dword ptr [esp]
// 0056dac4  b8c8248c00           mov eax, 0x8c24c8
// 0056dac9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dad0  83c40c               add esp, 0xc
// 0056dad3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@VVector3@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
