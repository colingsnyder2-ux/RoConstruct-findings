// roc 2009-12 00652f20  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00652f20
//
// 00652f20  64a100000000         mov eax, dword ptr fs:[0]
// 00652f26  6aff                 push -1
// 00652f28  68be2e9400           push 0x942ebe
// 00652f2d  50                   push eax
// 00652f2e  b801000000           mov eax, 1
// 00652f33  64892500000000       mov dword ptr fs:[0], esp
// 00652f3a  84054ce7b800         test byte ptr [0xb8e74c], al
// 00652f40  7525                 jne 0x652f67
// 00652f42  09054ce7b800         or dword ptr [0xb8e74c], eax
// 00652f48  b960e6b800           mov ecx, 0xb8e660
// 00652f4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00652f55  e826ff1100           call 0x772e80
// 00652f5a  68e0389800           push 0x9838e0
// 00652f5f  e8c5191a00           call 0x7f4929
// 00652f64  83c404               add esp, 4
// 00652f67  8b0c24               mov ecx, dword ptr [esp]
// 00652f6a  b860e6b800           mov eax, 0xb8e660
// 00652f6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00652f76  83c40c               add esp, 0xc
// 00652f79  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
