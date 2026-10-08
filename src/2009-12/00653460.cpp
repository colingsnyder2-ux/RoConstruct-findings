// roc 2009-12 00653460  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653460
//
// 00653460  64a100000000         mov eax, dword ptr fs:[0]
// 00653466  6aff                 push -1
// 00653468  683e309400           push 0x94303e
// 0065346d  50                   push eax
// 0065346e  b801000000           mov eax, 1
// 00653473  64892500000000       mov dword ptr fs:[0], esp
// 0065347a  84058cf2b800         test byte ptr [0xb8f28c], al
// 00653480  7525                 jne 0x6534a7
// 00653482  09058cf2b800         or dword ptr [0xb8f28c], eax
// 00653488  b9a0f1b800           mov ecx, 0xb8f1a0
// 0065348d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653495  e82639ffff           call 0x646dc0
// 0065349a  6820389800           push 0x983820
// 0065349f  e885141a00           call 0x7f4929
// 006534a4  83c404               add esp, 4
// 006534a7  8b0c24               mov ecx, dword ptr [esp]
// 006534aa  b8a0f1b800           mov eax, 0xb8f1a0
// 006534af  64890d00000000       mov dword ptr fs:[0], ecx
// 006534b6  83c40c               add esp, 0xc
// 006534b9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
