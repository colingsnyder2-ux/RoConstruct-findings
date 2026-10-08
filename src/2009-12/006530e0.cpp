// roc 2009-12 006530e0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006530e0
//
// 006530e0  64a100000000         mov eax, dword ptr fs:[0]
// 006530e6  6aff                 push -1
// 006530e8  683e2f9400           push 0x942f3e
// 006530ed  50                   push eax
// 006530ee  b801000000           mov eax, 1
// 006530f3  64892500000000       mov dword ptr fs:[0], esp
// 006530fa  84050cebb800         test byte ptr [0xb8eb0c], al
// 00653100  7525                 jne 0x653127
// 00653102  09050cebb800         or dword ptr [0xb8eb0c], eax
// 00653108  b920eab800           mov ecx, 0xb8ea20
// 0065310d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653115  e836ad0c00           call 0x71de50
// 0065311a  68a0389800           push 0x9838a0
// 0065311f  e805181a00           call 0x7f4929
// 00653124  83c404               add esp, 4
// 00653127  8b0c24               mov ecx, dword ptr [esp]
// 0065312a  b820eab800           mov eax, 0xb8ea20
// 0065312f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653136  83c40c               add esp, 0xc
// 00653139  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
