// roc 2007-03 0056d160  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d160
//
// 0056d160  64a100000000         mov eax, dword ptr fs:[0]
// 0056d166  6aff                 push -1
// 0056d168  68fe5d7500           push 0x755dfe
// 0056d16d  50                   push eax
// 0056d16e  b801000000           mov eax, 1
// 0056d173  64892500000000       mov dword ptr fs:[0], esp
// 0056d17a  840528c78b00         test byte ptr [0x8bc728], al
// 0056d180  752f                 jne 0x56d1b1
// 0056d182  090528c78b00         or dword ptr [0x8bc728], eax
// 0056d188  68a0df8800           push 0x88dfa0
// 0056d18d  68b8b67a00           push 0x7ab6b8
// 0056d192  b918c78b00           mov ecx, 0x8bc718
// 0056d197  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d19f  e8acf0ffff           call 0x56c250
// 0056d1a4  68e09c7700           push 0x779ce0
// 0056d1a9  e805200b00           call 0x61f1b3
// 0056d1ae  83c404               add esp, 4
// 0056d1b1  8b0c24               mov ecx, dword ptr [esp]
// 0056d1b4  b818c78b00           mov eax, 0x8bc718
// 0056d1b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d1c0  83c40c               add esp, 0xc
// 0056d1c3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
