// roc 2009-12 00653230  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653230
//
// 00653230  64a100000000         mov eax, dword ptr fs:[0]
// 00653236  6aff                 push -1
// 00653238  689e2f9400           push 0x942f9e
// 0065323d  50                   push eax
// 0065323e  b801000000           mov eax, 1
// 00653243  64892500000000       mov dword ptr fs:[0], esp
// 0065324a  8405dcedb800         test byte ptr [0xb8eddc], al
// 00653250  7525                 jne 0x653277
// 00653252  0905dcedb800         or dword ptr [0xb8eddc], eax
// 00653258  b9f0ecb800           mov ecx, 0xb8ecf0
// 0065325d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653265  e846fc0e00           call 0x742eb0
// 0065326a  6870389800           push 0x983870
// 0065326f  e8b5161a00           call 0x7f4929
// 00653274  83c404               add esp, 4
// 00653277  8b0c24               mov ecx, dword ptr [esp]
// 0065327a  b8f0ecb800           mov eax, 0xb8ecf0
// 0065327f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653286  83c40c               add esp, 0xc
// 00653289  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
