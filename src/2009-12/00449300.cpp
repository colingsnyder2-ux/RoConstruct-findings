// roc 2009-12 00449300  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00449300
//
// 00449300  64a100000000         mov eax, dword ptr fs:[0]
// 00449306  6aff                 push -1
// 00449308  688eab9200           push 0x92ab8e
// 0044930d  50                   push eax
// 0044930e  b801000000           mov eax, 1
// 00449313  64892500000000       mov dword ptr fs:[0], esp
// 0044931a  84056ca8b700         test byte ptr [0xb7a86c], al
// 00449320  7525                 jne 0x449347
// 00449322  09056ca8b700         or dword ptr [0xb7a86c], eax
// 00449328  b980a7b700           mov ecx, 0xb7a780
// 0044932d  c744240800000000     mov dword ptr [esp + 8], 0
// 00449335  e8b6f0ffff           call 0x4483f0
// 0044933a  6800e69700           push 0x97e600
// 0044933f  e8e5b53a00           call 0x7f4929
// 00449344  83c404               add esp, 4
// 00449347  8b0c24               mov ecx, dword ptr [esp]
// 0044934a  b880a7b700           mov eax, 0xb7a780
// 0044934f  64890d00000000       mov dword ptr fs:[0], ecx
// 00449356  83c40c               add esp, 0xc
// 00449359  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
