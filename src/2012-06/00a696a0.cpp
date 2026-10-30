// roc 2012-06 00a696a0  unit: CXTCaptionThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a696a0
//
// 00a696a0  6aff                 push -1
// 00a696a2  68b892ae00           push 0xae92b8
// 00a696a7  64a100000000         mov eax, dword ptr fs:[0]
// 00a696ad  50                   push eax
// 00a696ae  51                   push ecx
// 00a696af  56                   push esi
// 00a696b0  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a696b5  33c4                 xor eax, esp
// 00a696b7  50                   push eax
// 00a696b8  8d44240c             lea eax, [esp + 0xc]
// 00a696bc  64a300000000         mov dword ptr fs:[0], eax
// 00a696c2  8bf1                 mov esi, ecx
// 00a696c4  89742408             mov dword ptr [esp + 8], esi
// 00a696c8  e8f3cef7ff           call 0x9e65c0
// 00a696cd  8d4e14               lea ecx, [esi + 0x14]
// 00a696d0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a696d8  c706a458c200         mov dword ptr [esi], 0xc258a4
// 00a696de  e80d36f5ff           call 0x9bccf0
// 00a696e3  8d4e20               lea ecx, [esi + 0x20]
// 00a696e6  e80536f5ff           call 0x9bccf0
// 00a696eb  8bc6                 mov eax, esi
// 00a696ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a696f1  64890d00000000       mov dword ptr fs:[0], ecx
// 00a696f8  59                   pop ecx
// 00a696f9  5e                   pop esi
// 00a696fa  83c410               add esp, 0x10
// 00a696fd  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp