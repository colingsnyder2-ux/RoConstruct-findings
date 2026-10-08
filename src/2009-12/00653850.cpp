// roc 2009-12 00653850  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653850
//
// 00653850  64a100000000         mov eax, dword ptr fs:[0]
// 00653856  6aff                 push -1
// 00653858  685e319400           push 0x94315e
// 0065385d  50                   push eax
// 0065385e  b801000000           mov eax, 1
// 00653863  64892500000000       mov dword ptr fs:[0], esp
// 0065386a  8405fcfab800         test byte ptr [0xb8fafc], al
// 00653870  7525                 jne 0x653897
// 00653872  0905fcfab800         or dword ptr [0xb8fafc], eax
// 00653878  b910fab800           mov ecx, 0xb8fa10
// 0065387d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653885  e846b50700           call 0x6cedd0
// 0065388a  6890379800           push 0x983790
// 0065388f  e895101a00           call 0x7f4929
// 00653894  83c404               add esp, 4
// 00653897  8b0c24               mov ecx, dword ptr [esp]
// 0065389a  b810fab800           mov eax, 0xb8fa10
// 0065389f  64890d00000000       mov dword ptr fs:[0], ecx
// 006538a6  83c40c               add esp, 0xc
// 006538a9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
