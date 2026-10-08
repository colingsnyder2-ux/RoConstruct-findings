// roc 2009-12 006532a0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006532a0
//
// 006532a0  64a100000000         mov eax, dword ptr fs:[0]
// 006532a6  6aff                 push -1
// 006532a8  68be2f9400           push 0x942fbe
// 006532ad  50                   push eax
// 006532ae  b801000000           mov eax, 1
// 006532b3  64892500000000       mov dword ptr fs:[0], esp
// 006532ba  8405cceeb800         test byte ptr [0xb8eecc], al
// 006532c0  7525                 jne 0x6532e7
// 006532c2  0905cceeb800         or dword ptr [0xb8eecc], eax
// 006532c8  b9e0edb800           mov ecx, 0xb8ede0
// 006532cd  c744240800000000     mov dword ptr [esp + 8], 0
// 006532d5  e856fa0e00           call 0x742d30
// 006532da  6860389800           push 0x983860
// 006532df  e845161a00           call 0x7f4929
// 006532e4  83c404               add esp, 4
// 006532e7  8b0c24               mov ecx, dword ptr [esp]
// 006532ea  b8e0edb800           mov eax, 0xb8ede0
// 006532ef  64890d00000000       mov dword ptr fs:[0], ecx
// 006532f6  83c40c               add esp, 0xc
// 006532f9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
