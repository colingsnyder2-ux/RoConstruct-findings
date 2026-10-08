// roc 2009-12 00523b70  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00523b70
//
// 00523b70  64a100000000         mov eax, dword ptr fs:[0]
// 00523b76  6aff                 push -1
// 00523b78  681e899300           push 0x93891e
// 00523b7d  50                   push eax
// 00523b7e  b801000000           mov eax, 1
// 00523b83  64892500000000       mov dword ptr fs:[0], esp
// 00523b8a  840564fcb700         test byte ptr [0xb7fc64], al
// 00523b90  7525                 jne 0x523bb7
// 00523b92  090564fcb700         or dword ptr [0xb7fc64], eax
// 00523b98  b978fbb700           mov ecx, 0xb7fb78
// 00523b9d  c744240800000000     mov dword ptr [esp + 8], 0
// 00523ba5  e8365c0000           call 0x5297e0
// 00523baa  68c0ff9700           push 0x97ffc0
// 00523baf  e8750d2d00           call 0x7f4929
// 00523bb4  83c404               add esp, 4
// 00523bb7  8b0c24               mov ecx, dword ptr [esp]
// 00523bba  b878fbb700           mov eax, 0xb7fb78
// 00523bbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00523bc6  83c40c               add esp, 0xc
// 00523bc9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
