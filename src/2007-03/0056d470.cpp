// roc 2007-03 0056d470  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d470
//
// 0056d470  64a100000000         mov eax, dword ptr fs:[0]
// 0056d476  6aff                 push -1
// 0056d478  68de5e7500           push 0x755ede
// 0056d47d  50                   push eax
// 0056d47e  b801000000           mov eax, 1
// 0056d483  64892500000000       mov dword ptr fs:[0], esp
// 0056d48a  8405b4c78b00         test byte ptr [0x8bc7b4], al
// 0056d490  752f                 jne 0x56d4c1
// 0056d492  0905b4c78b00         or dword ptr [0x8bc7b4], eax
// 0056d498  68747d8900           push 0x897d74
// 0056d49d  68d0b67a00           push 0x7ab6d0
// 0056d4a2  b9a4c78b00           mov ecx, 0x8bc7a4
// 0056d4a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d4af  e89cedffff           call 0x56c250
// 0056d4b4  68709c7700           push 0x779c70
// 0056d4b9  e8f51c0b00           call 0x61f1b3
// 0056d4be  83c404               add esp, 4
// 0056d4c1  8b0c24               mov ecx, dword ptr [esp]
// 0056d4c4  b8a4c78b00           mov eax, 0x8bc7a4
// 0056d4c9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d4d0  83c40c               add esp, 0xc
// 0056d4d3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@VVector3@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
