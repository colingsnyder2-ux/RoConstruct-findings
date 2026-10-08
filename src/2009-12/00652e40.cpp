// roc 2009-12 00652e40  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00652e40
//
// 00652e40  64a100000000         mov eax, dword ptr fs:[0]
// 00652e46  6aff                 push -1
// 00652e48  687e2e9400           push 0x942e7e
// 00652e4d  50                   push eax
// 00652e4e  b801000000           mov eax, 1
// 00652e53  64892500000000       mov dword ptr fs:[0], esp
// 00652e5a  84056ce5b800         test byte ptr [0xb8e56c], al
// 00652e60  7525                 jne 0x652e87
// 00652e62  09056ce5b800         or dword ptr [0xb8e56c], eax
// 00652e68  b980e4b800           mov ecx, 0xb8e480
// 00652e6d  c744240800000000     mov dword ptr [esp + 8], 0
// 00652e75  e8e6cd0300           call 0x68fc60
// 00652e7a  6800399800           push 0x983900
// 00652e7f  e8a51a1a00           call 0x7f4929
// 00652e84  83c404               add esp, 4
// 00652e87  8b0c24               mov ecx, dword ptr [esp]
// 00652e8a  b880e4b800           mov eax, 0xb8e480
// 00652e8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00652e96  83c40c               add esp, 0xc
// 00652e99  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
