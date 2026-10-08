// roc 2007-03 0056d080  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d080
//
// 0056d080  64a100000000         mov eax, dword ptr fs:[0]
// 0056d086  6aff                 push -1
// 0056d088  68be5d7500           push 0x755dbe
// 0056d08d  50                   push eax
// 0056d08e  b801000000           mov eax, 1
// 0056d093  64892500000000       mov dword ptr fs:[0], esp
// 0056d09a  840500c78b00         test byte ptr [0x8bc700], al
// 0056d0a0  752f                 jne 0x56d0d1
// 0056d0a2  090500c78b00         or dword ptr [0x8bc700], eax
// 0056d0a8  68300a8900           push 0x890a30
// 0056d0ad  68c09f7900           push 0x799fc0
// 0056d0b2  b9f0c68b00           mov ecx, 0x8bc6f0
// 0056d0b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d0bf  e88cf1ffff           call 0x56c250
// 0056d0c4  68009d7700           push 0x779d00
// 0056d0c9  e8e5200b00           call 0x61f1b3
// 0056d0ce  83c404               add esp, 4
// 0056d0d1  8b0c24               mov ecx, dword ptr [esp]
// 0056d0d4  b8f0c68b00           mov eax, 0x8bc6f0
// 0056d0d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d0e0  83c40c               add esp, 0xc
// 0056d0e3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
