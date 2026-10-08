// roc 2009-12 00653380  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653380
//
// 00653380  64a100000000         mov eax, dword ptr fs:[0]
// 00653386  6aff                 push -1
// 00653388  68fe2f9400           push 0x942ffe
// 0065338d  50                   push eax
// 0065338e  b801000000           mov eax, 1
// 00653393  64892500000000       mov dword ptr fs:[0], esp
// 0065339a  8405acf0b800         test byte ptr [0xb8f0ac], al
// 006533a0  7525                 jne 0x6533c7
// 006533a2  0905acf0b800         or dword ptr [0xb8f0ac], eax
// 006533a8  b9c0efb800           mov ecx, 0xb8efc0
// 006533ad  c744240800000000     mov dword ptr [esp + 8], 0
// 006533b5  e8760b1200           call 0x773f30
// 006533ba  6840389800           push 0x983840
// 006533bf  e865151a00           call 0x7f4929
// 006533c4  83c404               add esp, 4
// 006533c7  8b0c24               mov ecx, dword ptr [esp]
// 006533ca  b8c0efb800           mov eax, 0xb8efc0
// 006533cf  64890d00000000       mov dword ptr fs:[0], ecx
// 006533d6  83c40c               add esp, 0xc
// 006533d9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
