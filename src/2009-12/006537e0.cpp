// roc 2009-12 006537e0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006537e0
//
// 006537e0  64a100000000         mov eax, dword ptr fs:[0]
// 006537e6  6aff                 push -1
// 006537e8  683e319400           push 0x94313e
// 006537ed  50                   push eax
// 006537ee  b801000000           mov eax, 1
// 006537f3  64892500000000       mov dword ptr fs:[0], esp
// 006537fa  84050cfab800         test byte ptr [0xb8fa0c], al
// 00653800  7525                 jne 0x653827
// 00653802  09050cfab800         or dword ptr [0xb8fa0c], eax
// 00653808  b920f9b800           mov ecx, 0xb8f920
// 0065380d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653815  e8360c1200           call 0x774450
// 0065381a  68a0379800           push 0x9837a0
// 0065381f  e805111a00           call 0x7f4929
// 00653824  83c404               add esp, 4
// 00653827  8b0c24               mov ecx, dword ptr [esp]
// 0065382a  b820f9b800           mov eax, 0xb8f920
// 0065382f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653836  83c40c               add esp, 0xc
// 00653839  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
