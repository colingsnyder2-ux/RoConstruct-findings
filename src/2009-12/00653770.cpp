// roc 2009-12 00653770  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653770
//
// 00653770  64a100000000         mov eax, dword ptr fs:[0]
// 00653776  6aff                 push -1
// 00653778  681e319400           push 0x94311e
// 0065377d  50                   push eax
// 0065377e  b801000000           mov eax, 1
// 00653783  64892500000000       mov dword ptr fs:[0], esp
// 0065378a  84051cf9b800         test byte ptr [0xb8f91c], al
// 00653790  7525                 jne 0x6537b7
// 00653792  09051cf9b800         or dword ptr [0xb8f91c], eax
// 00653798  b930f8b800           mov ecx, 0xb8f830
// 0065379d  c744240800000000     mov dword ptr [esp + 8], 0
// 006537a5  e8e6c40800           call 0x6dfc90
// 006537aa  68b0379800           push 0x9837b0
// 006537af  e875111a00           call 0x7f4929
// 006537b4  83c404               add esp, 4
// 006537b7  8b0c24               mov ecx, dword ptr [esp]
// 006537ba  b830f8b800           mov eax, 0xb8f830
// 006537bf  64890d00000000       mov dword ptr fs:[0], ecx
// 006537c6  83c40c               add esp, 0xc
// 006537c9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
