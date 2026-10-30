// roc 2007-03 00704dd0  unit: seg_00700000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704dd0
//
// 00704dd0  6aff                 push -1
// 00704dd2  68d8c37600           push 0x76c3d8
// 00704dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00704ddd  50                   push eax
// 00704dde  51                   push ecx
// 00704ddf  56                   push esi
// 00704de0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00704de5  33c4                 xor eax, esp
// 00704de7  50                   push eax
// 00704de8  8d44240c             lea eax, [esp + 0xc]
// 00704dec  64a300000000         mov dword ptr fs:[0], eax
// 00704df2  8bf1                 mov esi, ecx
// 00704df4  89742408             mov dword ptr [esp + 8], esi
// 00704df8  e88365f7ff           call 0x67b380
// 00704dfd  8d4e14               lea ecx, [esi + 0x14]
// 00704e00  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00704e08  c70684d77d00         mov dword ptr [esi], 0x7dd784
// 00704e0e  e8cdf6f4ff           call 0x6544e0
// 00704e13  8d4e20               lea ecx, [esi + 0x20]
// 00704e16  e8c5f6f4ff           call 0x6544e0
// 00704e1b  8bc6                 mov eax, esi
// 00704e1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00704e21  64890d00000000       mov dword ptr fs:[0], ecx
// 00704e28  59                   pop ecx
// 00704e29  5e                   pop esi
// 00704e2a  83c410               add esp, 0x10
// 00704e2d  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp