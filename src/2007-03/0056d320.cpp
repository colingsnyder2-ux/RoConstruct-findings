// roc 2007-03 0056d320  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d320
//
// 0056d320  64a100000000         mov eax, dword ptr fs:[0]
// 0056d326  6aff                 push -1
// 0056d328  687e5e7500           push 0x755e7e
// 0056d32d  50                   push eax
// 0056d32e  b801000000           mov eax, 1
// 0056d333  64892500000000       mov dword ptr fs:[0], esp
// 0056d33a  840578c78b00         test byte ptr [0x8bc778], al
// 0056d340  752f                 jne 0x56d371
// 0056d342  090578c78b00         or dword ptr [0x8bc778], eax
// 0056d348  68687d8900           push 0x897d68
// 0056d34d  68c0b67a00           push 0x7ab6c0
// 0056d352  b968c78b00           mov ecx, 0x8bc768
// 0056d357  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d35f  e8eceeffff           call 0x56c250
// 0056d364  68a09c7700           push 0x779ca0
// 0056d369  e8451e0b00           call 0x61f1b3
// 0056d36e  83c404               add esp, 4
// 0056d371  8b0c24               mov ecx, dword ptr [esp]
// 0056d374  b868c78b00           mov eax, 0x8bc768
// 0056d379  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d380  83c40c               add esp, 0xc
// 0056d383  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@N@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
