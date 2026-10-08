// roc 2009-12 00652d60  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00652d60
//
// 00652d60  64a100000000         mov eax, dword ptr fs:[0]
// 00652d66  6aff                 push -1
// 00652d68  683e2e9400           push 0x942e3e
// 00652d6d  50                   push eax
// 00652d6e  b801000000           mov eax, 1
// 00652d73  64892500000000       mov dword ptr fs:[0], esp
// 00652d7a  84058ce3b800         test byte ptr [0xb8e38c], al
// 00652d80  7525                 jne 0x652da7
// 00652d82  09058ce3b800         or dword ptr [0xb8e38c], eax
// 00652d88  b9a0e2b800           mov ecx, 0xb8e2a0
// 00652d8d  c744240800000000     mov dword ptr [esp + 8], 0
// 00652d95  e896f71100           call 0x772530
// 00652d9a  6820399800           push 0x983920
// 00652d9f  e8851b1a00           call 0x7f4929
// 00652da4  83c404               add esp, 4
// 00652da7  8b0c24               mov ecx, dword ptr [esp]
// 00652daa  b8a0e2b800           mov eax, 0xb8e2a0
// 00652daf  64890d00000000       mov dword ptr fs:[0], ecx
// 00652db6  83c40c               add esp, 0xc
// 00652db9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
