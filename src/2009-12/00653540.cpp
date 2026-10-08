// roc 2009-12 00653540  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653540
//
// 00653540  64a100000000         mov eax, dword ptr fs:[0]
// 00653546  6aff                 push -1
// 00653548  687e309400           push 0x94307e
// 0065354d  50                   push eax
// 0065354e  b801000000           mov eax, 1
// 00653553  64892500000000       mov dword ptr fs:[0], esp
// 0065355a  84056cf4b800         test byte ptr [0xb8f46c], al
// 00653560  7525                 jne 0x653587
// 00653562  09056cf4b800         or dword ptr [0xb8f46c], eax
// 00653568  b980f3b800           mov ecx, 0xb8f380
// 0065356d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653575  e866320900           call 0x6e67e0
// 0065357a  6800389800           push 0x983800
// 0065357f  e8a5131a00           call 0x7f4929
// 00653584  83c404               add esp, 4
// 00653587  8b0c24               mov ecx, dword ptr [esp]
// 0065358a  b880f3b800           mov eax, 0xb8f380
// 0065358f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653596  83c40c               add esp, 0xc
// 00653599  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
