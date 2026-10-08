// roc 2009-12 00652dd0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00652dd0
//
// 00652dd0  64a100000000         mov eax, dword ptr fs:[0]
// 00652dd6  6aff                 push -1
// 00652dd8  685e2e9400           push 0x942e5e
// 00652ddd  50                   push eax
// 00652dde  b801000000           mov eax, 1
// 00652de3  64892500000000       mov dword ptr fs:[0], esp
// 00652dea  84057ce4b800         test byte ptr [0xb8e47c], al
// 00652df0  7525                 jne 0x652e17
// 00652df2  09057ce4b800         or dword ptr [0xb8e47c], eax
// 00652df8  b990e3b800           mov ecx, 0xb8e390
// 00652dfd  c744240800000000     mov dword ptr [esp + 8], 0
// 00652e05  e8c6f81100           call 0x7726d0
// 00652e0a  6810399800           push 0x983910
// 00652e0f  e8151b1a00           call 0x7f4929
// 00652e14  83c404               add esp, 4
// 00652e17  8b0c24               mov ecx, dword ptr [esp]
// 00652e1a  b890e3b800           mov eax, 0xb8e390
// 00652e1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00652e26  83c40c               add esp, 0xc
// 00652e29  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
