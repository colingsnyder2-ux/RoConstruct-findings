// roc 2011-06 008c2590  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2590
//
// 008c2590  83796800             cmp dword ptr [ecx + 0x68], 0
// 008c2594  7422                 je 0x8c25b8
// 008c2596  83796400             cmp dword ptr [ecx + 0x64], 0
// 008c259a  741c                 je 0x8c25b8
// 008c259c  c781c401000000000000 mov dword ptr [ecx + 0x1c4], 0
// 008c25a6  83c154               add ecx, 0x54
// 008c25a9  6a00                 push 0
// 008c25ab  51                   push ecx
// 008c25ac  e8aff7ffff           call 0x8c1d60
// 008c25b1  8bc8                 mov ecx, eax
// 008c25b3  e8c8c6f8ff           call 0x84ec80
// 008c25b8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Restore@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
