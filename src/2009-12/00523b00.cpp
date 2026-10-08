// roc 2009-12 00523b00  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00523b00
//
// 00523b00  64a100000000         mov eax, dword ptr fs:[0]
// 00523b06  6aff                 push -1
// 00523b08  68fe889300           push 0x9388fe
// 00523b0d  50                   push eax
// 00523b0e  b801000000           mov eax, 1
// 00523b13  64892500000000       mov dword ptr fs:[0], esp
// 00523b1a  840574fbb700         test byte ptr [0xb7fb74], al
// 00523b20  7525                 jne 0x523b47
// 00523b22  090574fbb700         or dword ptr [0xb7fb74], eax
// 00523b28  b988fab700           mov ecx, 0xb7fa88
// 00523b2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00523b35  e8365b0000           call 0x529670
// 00523b3a  68d0ff9700           push 0x97ffd0
// 00523b3f  e8e50d2d00           call 0x7f4929
// 00523b44  83c404               add esp, 4
// 00523b47  8b0c24               mov ecx, dword ptr [esp]
// 00523b4a  b888fab700           mov eax, 0xb7fa88
// 00523b4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00523b56  83c40c               add esp, 0xc
// 00523b59  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
