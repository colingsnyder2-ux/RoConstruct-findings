// roc 2009-12 006534d0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006534d0
//
// 006534d0  64a100000000         mov eax, dword ptr fs:[0]
// 006534d6  6aff                 push -1
// 006534d8  685e309400           push 0x94305e
// 006534dd  50                   push eax
// 006534de  b801000000           mov eax, 1
// 006534e3  64892500000000       mov dword ptr fs:[0], esp
// 006534ea  84057cf3b800         test byte ptr [0xb8f37c], al
// 006534f0  7525                 jne 0x653517
// 006534f2  09057cf3b800         or dword ptr [0xb8f37c], eax
// 006534f8  b990f2b800           mov ecx, 0xb8f290
// 006534fd  c744240800000000     mov dword ptr [esp + 8], 0
// 00653505  e826ff0500           call 0x6b3430
// 0065350a  6810389800           push 0x983810
// 0065350f  e815141a00           call 0x7f4929
// 00653514  83c404               add esp, 4
// 00653517  8b0c24               mov ecx, dword ptr [esp]
// 0065351a  b890f2b800           mov eax, 0xb8f290
// 0065351f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653526  83c40c               add esp, 0xc
// 00653529  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
