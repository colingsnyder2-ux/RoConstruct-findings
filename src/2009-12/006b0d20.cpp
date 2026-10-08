// roc 2009-12 006b0d20  unit: RBX::Accoutrement  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b0d20
//
// 006b0d20  64a100000000         mov eax, dword ptr fs:[0]
// 006b0d26  6aff                 push -1
// 006b0d28  685e839400           push 0x94835e
// 006b0d2d  50                   push eax
// 006b0d2e  b801000000           mov eax, 1
// 006b0d33  64892500000000       mov dword ptr fs:[0], esp
// 006b0d3a  8405e019b900         test byte ptr [0xb919e0], al
// 006b0d40  7525                 jne 0x6b0d67
// 006b0d42  0905e019b900         or dword ptr [0xb919e0], eax
// 006b0d48  b9f818b900           mov ecx, 0xb918f8
// 006b0d4d  c744240800000000     mov dword ptr [esp + 8], 0
// 006b0d55  e8a6e1ffff           call 0x6aef00
// 006b0d5a  6870559800           push 0x985570
// 006b0d5f  e8c53b1400           call 0x7f4929
// 006b0d64  83c404               add esp, 4
// 006b0d67  8b0c24               mov ecx, dword ptr [esp]
// 006b0d6a  b8f818b900           mov eax, 0xb918f8
// 006b0d6f  64890d00000000       mov dword ptr fs:[0], ecx
// 006b0d76  83c40c               add esp, 0xc
// 006b0d79  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
