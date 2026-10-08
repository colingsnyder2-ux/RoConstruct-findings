// roc 2009-12 006533f0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006533f0
//
// 006533f0  64a100000000         mov eax, dword ptr fs:[0]
// 006533f6  6aff                 push -1
// 006533f8  681e309400           push 0x94301e
// 006533fd  50                   push eax
// 006533fe  b801000000           mov eax, 1
// 00653403  64892500000000       mov dword ptr fs:[0], esp
// 0065340a  84059cf1b800         test byte ptr [0xb8f19c], al
// 00653410  7525                 jne 0x653437
// 00653412  09059cf1b800         or dword ptr [0xb8f19c], eax
// 00653418  b9b0f0b800           mov ecx, 0xb8f0b0
// 0065341d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653425  e8760c1200           call 0x7740a0
// 0065342a  6830389800           push 0x983830
// 0065342f  e8f5141a00           call 0x7f4929
// 00653434  83c404               add esp, 4
// 00653437  8b0c24               mov ecx, dword ptr [esp]
// 0065343a  b8b0f0b800           mov eax, 0xb8f0b0
// 0065343f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653446  83c40c               add esp, 0xc
// 00653449  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
