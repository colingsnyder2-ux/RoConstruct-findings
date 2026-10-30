// roc 2012-06 00a3a9c0  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a9c0
//
// 00a3a9c0  83796800             cmp dword ptr [ecx + 0x68], 0
// 00a3a9c4  7422                 je 0xa3a9e8
// 00a3a9c6  83796400             cmp dword ptr [ecx + 0x64], 0
// 00a3a9ca  741c                 je 0xa3a9e8
// 00a3a9cc  c781c401000000000000 mov dword ptr [ecx + 0x1c4], 0
// 00a3a9d6  83c154               add ecx, 0x54
// 00a3a9d9  6a00                 push 0
// 00a3a9db  51                   push ecx
// 00a3a9dc  e88ff7ffff           call 0xa3a170
// 00a3a9e1  8bc8                 mov ecx, eax
// 00a3a9e3  e868c7f8ff           call 0x9c7150
// 00a3a9e8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Restore@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
