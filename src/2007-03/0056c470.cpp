// roc 2007-03 0056c470  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056c470
//
// 0056c470  64a100000000         mov eax, dword ptr fs:[0]
// 0056c476  6aff                 push -1
// 0056c478  68ee5c7500           push 0x755cee
// 0056c47d  50                   push eax
// 0056c47e  b801000000           mov eax, 1
// 0056c483  64892500000000       mov dword ptr fs:[0], esp
// 0056c48a  8405ccc68b00         test byte ptr [0x8bc6cc], al
// 0056c490  752f                 jne 0x56c4c1
// 0056c492  0905ccc68b00         or dword ptr [0x8bc6cc], eax
// 0056c498  68981d8800           push 0x881d98
// 0056c49d  6854b67a00           push 0x7ab654
// 0056c4a2  b9bcc68b00           mov ecx, 0x8bc6bc
// 0056c4a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c4af  e89cfdffff           call 0x56c250
// 0056c4b4  68209c7700           push 0x779c20
// 0056c4b9  e8f52c0b00           call 0x61f1b3
// 0056c4be  83c404               add esp, 4
// 0056c4c1  8b0c24               mov ecx, dword ptr [esp]
// 0056c4c4  b8bcc68b00           mov eax, 0x8bc6bc
// 0056c4c9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c4d0  83c40c               add esp, 0xc
// 0056c4d3  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??$singleton@VFunctionRef@Lua@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
