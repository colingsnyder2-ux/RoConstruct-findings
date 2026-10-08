// roc 2009-12 006538c0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006538c0
//
// 006538c0  64a100000000         mov eax, dword ptr fs:[0]
// 006538c6  6aff                 push -1
// 006538c8  687e319400           push 0x94317e
// 006538cd  50                   push eax
// 006538ce  b801000000           mov eax, 1
// 006538d3  64892500000000       mov dword ptr fs:[0], esp
// 006538da  8405ecfbb800         test byte ptr [0xb8fbec], al
// 006538e0  7525                 jne 0x653907
// 006538e2  0905ecfbb800         or dword ptr [0xb8fbec], eax
// 006538e8  b900fbb800           mov ecx, 0xb8fb00
// 006538ed  c744240800000000     mov dword ptr [esp + 8], 0
// 006538f5  e856e20200           call 0x681b50
// 006538fa  6880379800           push 0x983780
// 006538ff  e825101a00           call 0x7f4929
// 00653904  83c404               add esp, 4
// 00653907  8b0c24               mov ecx, dword ptr [esp]
// 0065390a  b800fbb800           mov eax, 0xb8fb00
// 0065390f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653916  83c40c               add esp, 0xc
// 00653919  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
