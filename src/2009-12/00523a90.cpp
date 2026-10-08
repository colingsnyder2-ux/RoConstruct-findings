// roc 2009-12 00523a90  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00523a90
//
// 00523a90  64a100000000         mov eax, dword ptr fs:[0]
// 00523a96  6aff                 push -1
// 00523a98  68de889300           push 0x9388de
// 00523a9d  50                   push eax
// 00523a9e  b801000000           mov eax, 1
// 00523aa3  64892500000000       mov dword ptr fs:[0], esp
// 00523aaa  840584fab700         test byte ptr [0xb7fa84], al
// 00523ab0  7525                 jne 0x523ad7
// 00523ab2  090584fab700         or dword ptr [0xb7fa84], eax
// 00523ab8  b998f9b700           mov ecx, 0xb7f998
// 00523abd  c744240800000000     mov dword ptr [esp + 8], 0
// 00523ac5  e8865e0000           call 0x529950
// 00523aca  68e0ff9700           push 0x97ffe0
// 00523acf  e8550e2d00           call 0x7f4929
// 00523ad4  83c404               add esp, 4
// 00523ad7  8b0c24               mov ecx, dword ptr [esp]
// 00523ada  b898f9b700           mov eax, 0xb7f998
// 00523adf  64890d00000000       mov dword ptr fs:[0], ecx
// 00523ae6  83c40c               add esp, 0xc
// 00523ae9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
