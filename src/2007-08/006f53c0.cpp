// from server: 100% by auto
// roc 2007-08 006f53c0  unit: CXTPCustomizeToolbarsPage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f53c0
//
// 006f53c0  56                   push esi
// 006f53c1  8bf1                 mov esi, ecx
// 006f53c3  e856b0f3ff           call 0x63041e
// 006f53c8  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 006f53ce  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 006f53d4  e8a7caf3ff           call 0x631e80
// 006f53d9  85c0                 test eax, eax
// 006f53db  7414                 je 0x6f53f1
// 006f53dd  6a00                 push 0
// 006f53df  6800004000           push 0x400000
// 006f53e4  6a00                 push 0
// 006f53e6  8d8e8c000000         lea ecx, [esi + 0x8c]
// 006f53ec  e823aef3ff           call 0x630214
// 006f53f1  8bce                 mov ecx, esi
// 006f53f3  e8c8f9ffff           call 0x6f4dc0
// 006f53f8  33c0                 xor eax, eax
// 006f53fa  5e                   pop esi
// 006f53fb  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnInitDialog@CXTPCustomizeToolbarsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
