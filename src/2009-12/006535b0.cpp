// roc 2009-12 006535b0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006535b0
//
// 006535b0  64a100000000         mov eax, dword ptr fs:[0]
// 006535b6  6aff                 push -1
// 006535b8  689e309400           push 0x94309e
// 006535bd  50                   push eax
// 006535be  b801000000           mov eax, 1
// 006535c3  64892500000000       mov dword ptr fs:[0], esp
// 006535ca  84055cf5b800         test byte ptr [0xb8f55c], al
// 006535d0  7525                 jne 0x6535f7
// 006535d2  09055cf5b800         or dword ptr [0xb8f55c], eax
// 006535d8  b970f4b800           mov ecx, 0xb8f470
// 006535dd  c744240800000000     mov dword ptr [esp + 8], 0
// 006535e5  e8a6f21100           call 0x772890
// 006535ea  68f0379800           push 0x9837f0
// 006535ef  e835131a00           call 0x7f4929
// 006535f4  83c404               add esp, 4
// 006535f7  8b0c24               mov ecx, dword ptr [esp]
// 006535fa  b870f4b800           mov eax, 0xb8f470
// 006535ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00653606  83c40c               add esp, 0xc
// 00653609  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
