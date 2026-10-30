// roc 2011-06 008c26c0  unit: CXTPDockingPaneTabbedContainer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c26c0
//
// 008c26c0  837c2408fc           cmp dword ptr [esp + 8], -4
// 008c26c5  56                   push esi
// 008c26c6  8bf1                 mov esi, ecx
// 008c26c8  7409                 je 0x8c26d3
// 008c26ca  e85f7ff4ff           call 0x80a62e
// 008c26cf  5e                   pop esi
// 008c26d0  c20800               ret 8
// 008c26d3  685816ac00           push 0xac1658
// 008c26d8  e8539f1000           call 0x9cc630
// 008c26dd  85c0                 test eax, eax
// 008c26df  7509                 jne 0x8c26ea
// 008c26e1  b805400080           mov eax, 0x80004005
// 008c26e6  5e                   pop esi
// 008c26e7  c20800               ret 8
// 008c26ea  50                   push eax
// 008c26eb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c26ef  50                   push eax
// 008c26f0  685816ac00           push 0xac1658
// 008c26f5  8d8e38010000         lea ecx, [esi + 0x138]
// 008c26fb  e860f7f8ff           call 0x851e60
// 008c2700  5e                   pop esi
// 008c2701  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnGetObject@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
