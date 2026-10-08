// roc 2009-12 00652f90  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00652f90
//
// 00652f90  64a100000000         mov eax, dword ptr fs:[0]
// 00652f96  6aff                 push -1
// 00652f98  68de2e9400           push 0x942ede
// 00652f9d  50                   push eax
// 00652f9e  b801000000           mov eax, 1
// 00652fa3  64892500000000       mov dword ptr fs:[0], esp
// 00652faa  84053ce8b800         test byte ptr [0xb8e83c], al
// 00652fb0  7525                 jne 0x652fd7
// 00652fb2  09053ce8b800         or dword ptr [0xb8e83c], eax
// 00652fb8  b950e7b800           mov ecx, 0xb8e750
// 00652fbd  c744240800000000     mov dword ptr [esp + 8], 0
// 00652fc5  e836001200           call 0x773000
// 00652fca  68d0389800           push 0x9838d0
// 00652fcf  e855191a00           call 0x7f4929
// 00652fd4  83c404               add esp, 4
// 00652fd7  8b0c24               mov ecx, dword ptr [esp]
// 00652fda  b850e7b800           mov eax, 0xb8e750
// 00652fdf  64890d00000000       mov dword ptr fs:[0], ecx
// 00652fe6  83c40c               add esp, 0xc
// 00652fe9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
