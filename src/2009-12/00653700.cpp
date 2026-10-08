// roc 2009-12 00653700  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653700
//
// 00653700  64a100000000         mov eax, dword ptr fs:[0]
// 00653706  6aff                 push -1
// 00653708  68fe309400           push 0x9430fe
// 0065370d  50                   push eax
// 0065370e  b801000000           mov eax, 1
// 00653713  64892500000000       mov dword ptr fs:[0], esp
// 0065371a  84052cf8b800         test byte ptr [0xb8f82c], al
// 00653720  7525                 jne 0x653747
// 00653722  09052cf8b800         or dword ptr [0xb8f82c], eax
// 00653728  b940f7b800           mov ecx, 0xb8f740
// 0065372d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653735  e8f60a1200           call 0x774230
// 0065373a  68c0379800           push 0x9837c0
// 0065373f  e8e5111a00           call 0x7f4929
// 00653744  83c404               add esp, 4
// 00653747  8b0c24               mov ecx, dword ptr [esp]
// 0065374a  b840f7b800           mov eax, 0xb8f740
// 0065374f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653756  83c40c               add esp, 0xc
// 00653759  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
