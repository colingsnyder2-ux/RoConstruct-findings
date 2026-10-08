// roc 2009-12 00653000  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653000
//
// 00653000  64a100000000         mov eax, dword ptr fs:[0]
// 00653006  6aff                 push -1
// 00653008  68fe2e9400           push 0x942efe
// 0065300d  50                   push eax
// 0065300e  b801000000           mov eax, 1
// 00653013  64892500000000       mov dword ptr fs:[0], esp
// 0065301a  84052ce9b800         test byte ptr [0xb8e92c], al
// 00653020  7525                 jne 0x653047
// 00653022  09052ce9b800         or dword ptr [0xb8e92c], eax
// 00653028  b940e8b800           mov ecx, 0xb8e840
// 0065302d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653035  e8767e0800           call 0x6daeb0
// 0065303a  68c0389800           push 0x9838c0
// 0065303f  e8e5181a00           call 0x7f4929
// 00653044  83c404               add esp, 4
// 00653047  8b0c24               mov ecx, dword ptr [esp]
// 0065304a  b840e8b800           mov eax, 0xb8e840
// 0065304f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653056  83c40c               add esp, 0xc
// 00653059  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
