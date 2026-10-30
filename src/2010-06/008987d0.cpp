// roc 2010-06 008987d0  unit: CXTCaptionThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008987d0
//
// 008987d0  6aff                 push -1
// 008987d2  68a8cb9b00           push 0x9bcba8
// 008987d7  64a100000000         mov eax, dword ptr fs:[0]
// 008987dd  50                   push eax
// 008987de  51                   push ecx
// 008987df  56                   push esi
// 008987e0  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008987e5  33c4                 xor eax, esp
// 008987e7  50                   push eax
// 008987e8  8d44240c             lea eax, [esp + 0xc]
// 008987ec  64a300000000         mov dword ptr fs:[0], eax
// 008987f2  8bf1                 mov esi, ecx
// 008987f4  89742408             mov dword ptr [esp + 8], esi
// 008987f8  e89356f7ff           call 0x80de90
// 008987fd  8d4e14               lea ecx, [esi + 0x14]
// 00898800  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00898808  c706e406a700         mov dword ptr [esi], 0xa706e4
// 0089880e  e8ada7f4ff           call 0x7e2fc0
// 00898813  8d4e20               lea ecx, [esi + 0x20]
// 00898816  e8a5a7f4ff           call 0x7e2fc0
// 0089881b  8bc6                 mov eax, esi
// 0089881d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00898821  64890d00000000       mov dword ptr fs:[0], ecx
// 00898828  59                   pop ecx
// 00898829  5e                   pop esi
// 0089882a  83c410               add esp, 0x10
// 0089882d  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp