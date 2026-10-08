// roc 2007-03 0056d0f0  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d0f0
//
// 0056d0f0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d0f6  6aff                 push -1
// 0056d0f8  68de5d7500           push 0x755dde
// 0056d0fd  50                   push eax
// 0056d0fe  b801000000           mov eax, 1
// 0056d103  64892500000000       mov dword ptr fs:[0], esp
// 0056d10a  840514c78b00         test byte ptr [0x8bc714], al
// 0056d110  752f                 jne 0x56d141
// 0056d112  090514c78b00         or dword ptr [0x8bc714], eax
// 0056d118  68f0358800           push 0x8835f0
// 0056d11d  683c567a00           push 0x7a563c
// 0056d122  b904c78b00           mov ecx, 0x8bc704
// 0056d127  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d12f  e81cf1ffff           call 0x56c250
// 0056d134  68f09c7700           push 0x779cf0
// 0056d139  e875200b00           call 0x61f1b3
// 0056d13e  83c404               add esp, 4
// 0056d141  8b0c24               mov ecx, dword ptr [esp]
// 0056d144  b804c78b00           mov eax, 0x8bc704
// 0056d149  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d150  83c40c               add esp, 0xc
// 0056d153  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@VInstance@RBX@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
