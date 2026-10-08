// roc 2007-03 0056d2b0  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d2b0
//
// 0056d2b0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d2b6  6aff                 push -1
// 0056d2b8  685e5e7500           push 0x755e5e
// 0056d2bd  50                   push eax
// 0056d2be  b801000000           mov eax, 1
// 0056d2c3  64892500000000       mov dword ptr fs:[0], esp
// 0056d2ca  840564c78b00         test byte ptr [0x8bc764], al
// 0056d2d0  752f                 jne 0x56d301
// 0056d2d2  090564c78b00         or dword ptr [0x8bc764], eax
// 0056d2d8  68a0198800           push 0x8819a0
// 0056d2dd  6840987900           push 0x799840
// 0056d2e2  b954c78b00           mov ecx, 0x8bc754
// 0056d2e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d2ef  e85cefffff           call 0x56c250
// 0056d2f4  68b09c7700           push 0x779cb0
// 0056d2f9  e8b51e0b00           call 0x61f1b3
// 0056d2fe  83c404               add esp, 4
// 0056d301  8b0c24               mov ecx, dword ptr [esp]
// 0056d304  b854c78b00           mov eax, 0x8bc754
// 0056d309  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d310  83c40c               add esp, 0xc
// 0056d313  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@M@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
