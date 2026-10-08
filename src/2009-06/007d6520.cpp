// roc 2009-06 007d6520  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6520
//
// 007d6520  83796800             cmp dword ptr [ecx + 0x68], 0
// 007d6524  7422                 je 0x7d6548
// 007d6526  83796400             cmp dword ptr [ecx + 0x64], 0
// 007d652a  741c                 je 0x7d6548
// 007d652c  c781c401000000000000 mov dword ptr [ecx + 0x1c4], 0
// 007d6536  83c154               add ecx, 0x54
// 007d6539  6a00                 push 0
// 007d653b  51                   push ecx
// 007d653c  e8bff7ffff           call 0x7d5d00
// 007d6541  8bc8                 mov ecx, eax
// 007d6543  e8c87ff8ff           call 0x75e510
// 007d6548  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Restore@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
