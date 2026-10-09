// roc 2009-12 008c59e0  unit: CXTPCustomizeToolbarsPage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c59e0
//
// 008c59e0  56                   push esi
// 008c59e1  8bf1                 mov esi, ecx
// 008c59e3  e89ce7f2ff           call 0x7f4184
// 008c59e8  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 008c59ee  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 008c59f4  e8a7e9f4ff           call 0x8143a0
// 008c59f9  85c0                 test eax, eax
// 008c59fb  7414                 je 0x8c5a11
// 008c59fd  6a00                 push 0
// 008c59ff  6800004000           push 0x400000
// 008c5a04  6a00                 push 0
// 008c5a06  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c5a0c  e8efe3f2ff           call 0x7f3e00
// 008c5a11  8bce                 mov ecx, esi
// 008c5a13  e8b8f9ffff           call 0x8c53d0
// 008c5a18  33c0                 xor eax, eax
// 008c5a1a  5e                   pop esi
// 008c5a1b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnInitDialog@CXTPCustomizeToolbarsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
