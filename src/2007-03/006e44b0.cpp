// roc 2007-03 006e44b0  unit: seg_006e0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e44b0
//
// 006e44b0  56                   push esi
// 006e44b1  8bf1                 mov esi, ecx
// 006e44b3  e8faa3f3ff           call 0x61e8b2
// 006e44b8  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 006e44be  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 006e44c4  e85771f4ff           call 0x62b620
// 006e44c9  85c0                 test eax, eax
// 006e44cb  7414                 je 0x6e44e1
// 006e44cd  6a00                 push 0
// 006e44cf  6800004000           push 0x400000
// 006e44d4  6a00                 push 0
// 006e44d6  8d8e8c000000         lea ecx, [esi + 0x8c]
// 006e44dc  e8c1a1f3ff           call 0x61e6a2
// 006e44e1  8bce                 mov ecx, esi
// 006e44e3  e8a8faffff           call 0x6e3f90
// 006e44e8  33c0                 xor eax, eax
// 006e44ea  5e                   pop esi
// 006e44eb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnInitDialog@CXTPCustomizeToolbarsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
