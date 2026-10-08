// roc 2009-12 00653310  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653310
//
// 00653310  64a100000000         mov eax, dword ptr fs:[0]
// 00653316  6aff                 push -1
// 00653318  68de2f9400           push 0x942fde
// 0065331d  50                   push eax
// 0065331e  b801000000           mov eax, 1
// 00653323  64892500000000       mov dword ptr fs:[0], esp
// 0065332a  8405bcefb800         test byte ptr [0xb8efbc], al
// 00653330  7525                 jne 0x653357
// 00653332  0905bcefb800         or dword ptr [0xb8efbc], eax
// 00653338  b9d0eeb800           mov ecx, 0xb8eed0
// 0065333d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653345  e8360a1200           call 0x773d80
// 0065334a  6850389800           push 0x983850
// 0065334f  e8d5151a00           call 0x7f4929
// 00653354  83c404               add esp, 4
// 00653357  8b0c24               mov ecx, dword ptr [esp]
// 0065335a  b8d0eeb800           mov eax, 0xb8eed0
// 0065335f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653366  83c40c               add esp, 0xc
// 00653369  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
