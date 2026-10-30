// roc 2009-12 008b1060  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1060
//
// 008b1060  83796800             cmp dword ptr [ecx + 0x68], 0
// 008b1064  7422                 je 0x8b1088
// 008b1066  83796400             cmp dword ptr [ecx + 0x64], 0
// 008b106a  741c                 je 0x8b1088
// 008b106c  c781c401000000000000 mov dword ptr [ecx + 0x1c4], 0
// 008b1076  83c154               add ecx, 0x54
// 008b1079  6a00                 push 0
// 008b107b  51                   push ecx
// 008b107c  e8bff7ffff           call 0x8b0840
// 008b1081  8bc8                 mov ecx, eax
// 008b1083  e84882f8ff           call 0x8392d0
// 008b1088  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Restore@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
