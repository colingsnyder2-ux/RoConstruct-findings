// roc 2009-12 00653070  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653070
//
// 00653070  64a100000000         mov eax, dword ptr fs:[0]
// 00653076  6aff                 push -1
// 00653078  681e2f9400           push 0x942f1e
// 0065307d  50                   push eax
// 0065307e  b801000000           mov eax, 1
// 00653083  64892500000000       mov dword ptr fs:[0], esp
// 0065308a  84051ceab800         test byte ptr [0xb8ea1c], al
// 00653090  7525                 jne 0x6530b7
// 00653092  09051ceab800         or dword ptr [0xb8ea1c], eax
// 00653098  b930e9b800           mov ecx, 0xb8e930
// 0065309d  c744240800000000     mov dword ptr [esp + 8], 0
// 006530a5  e8d6001200           call 0x773180
// 006530aa  68b0389800           push 0x9838b0
// 006530af  e875181a00           call 0x7f4929
// 006530b4  83c404               add esp, 4
// 006530b7  8b0c24               mov ecx, dword ptr [esp]
// 006530ba  b830e9b800           mov eax, 0xb8e930
// 006530bf  64890d00000000       mov dword ptr fs:[0], ecx
// 006530c6  83c40c               add esp, 0xc
// 006530c9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
