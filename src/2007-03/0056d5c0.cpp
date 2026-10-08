// roc 2007-03 0056d5c0  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d5c0
//
// 0056d5c0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d5c6  6aff                 push -1
// 0056d5c8  683e5f7500           push 0x755f3e
// 0056d5cd  50                   push eax
// 0056d5ce  b801000000           mov eax, 1
// 0056d5d3  64892500000000       mov dword ptr fs:[0], esp
// 0056d5da  8405f0c78b00         test byte ptr [0x8bc7f0], al
// 0056d5e0  752f                 jne 0x56d611
// 0056d5e2  0905f0c78b00         or dword ptr [0x8bc7f0], eax
// 0056d5e8  68181a8800           push 0x881a18
// 0056d5ed  68f0b67a00           push 0x7ab6f0
// 0056d5f2  b9e0c78b00           mov ecx, 0x8bc7e0
// 0056d5f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d5ff  e84cecffff           call 0x56c250
// 0056d604  68409c7700           push 0x779c40
// 0056d609  e8a51b0b00           call 0x61f1b3
// 0056d60e  83c404               add esp, 4
// 0056d611  8b0c24               mov ecx, dword ptr [esp]
// 0056d614  b8e0c78b00           mov eax, 0x8bc7e0
// 0056d619  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d620  83c40c               add esp, 0xc
// 0056d623  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
