// from server: 100% by auto
// roc 2012-06 009c66d0  unit: CXTPDockingPaneManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c66d0
//
// 009c66d0  8d442404             lea eax, [esp + 4]
// 009c66d4  50                   push eax
// 009c66d5  e816310000           call 0x9c97f0
// 009c66da  85c0                 test eax, eax
// 009c66dc  740d                 je 0x9c66eb
// 009c66de  83f8ff               cmp eax, -1
// 009c66e1  7408                 je 0x9c66eb
// 009c66e3  b857000780           mov eax, 0x80070057
// 009c66e8  c21400               ret 0x14
// 009c66eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 009c66ef  b903000000           mov ecx, 3
// 009c66f4  668908               mov word ptr [eax], cx
// 009c66f7  c7400800000000       mov dword ptr [eax + 8], 0
// 009c66fe  33c0                 xor eax, eax
// 009c6700  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleState@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
