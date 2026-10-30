// from server: 100% by auto
// roc 2008-06 0075dce0  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dce0
//
// 0075dce0  83796800             cmp dword ptr [ecx + 0x68], 0
// 0075dce4  7422                 je 0x75dd08
// 0075dce6  83796400             cmp dword ptr [ecx + 0x64], 0
// 0075dcea  741c                 je 0x75dd08
// 0075dcec  c781c401000000000000 mov dword ptr [ecx + 0x1c4], 0
// 0075dcf6  83c154               add ecx, 0x54
// 0075dcf9  6a00                 push 0
// 0075dcfb  51                   push ecx
// 0075dcfc  e89ff7ffff           call 0x75d4a0
// 0075dd01  8bc8                 mov ecx, eax
// 0075dd03  e8e87ef8ff           call 0x6e5bf0
// 0075dd08  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Restore@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
