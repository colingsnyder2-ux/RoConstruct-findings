// roc 2010-06 00865140  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865140
//
// 00865140  83796800             cmp dword ptr [ecx + 0x68], 0
// 00865144  7422                 je 0x865168
// 00865146  83796400             cmp dword ptr [ecx + 0x64], 0
// 0086514a  741c                 je 0x865168
// 0086514c  c781c401000000000000 mov dword ptr [ecx + 0x1c4], 0
// 00865156  83c154               add ecx, 0x54
// 00865159  6a00                 push 0
// 0086515b  51                   push ecx
// 0086515c  e8aff7ffff           call 0x864910
// 00865161  8bc8                 mov ecx, eax
// 00865163  e8c882f8ff           call 0x7ed430
// 00865168  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Restore@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
