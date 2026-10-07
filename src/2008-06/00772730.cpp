// roc 2008-06 00772730  unit: CXTPCustomizeToolbarsPage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772730
//
// 00772730  56                   push esi
// 00772731  8bf1                 mov esi, ecx
// 00772733  e852e7f2ff           call 0x6a0e8a
// 00772738  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0077273e  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00772744  e8c704f3ff           call 0x6a2c10
// 00772749  85c0                 test eax, eax
// 0077274b  7414                 je 0x772761
// 0077274d  6a00                 push 0
// 0077274f  6800004000           push 0x400000
// 00772754  6a00                 push 0
// 00772756  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0077275c  e8d7e4f2ff           call 0x6a0c38
// 00772761  8bce                 mov ecx, esi
// 00772763  e8b8f9ffff           call 0x772120
// 00772768  33c0                 xor eax, eax
// 0077276a  5e                   pop esi
// 0077276b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnInitDialog@CXTPCustomizeToolbarsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
