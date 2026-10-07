// roc 2011-06 0084e210  unit: CXTPDockingPaneManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e210
//
// 0084e210  8d442404             lea eax, [esp + 4]
// 0084e214  50                   push eax
// 0084e215  e816310000           call 0x851330
// 0084e21a  85c0                 test eax, eax
// 0084e21c  740d                 je 0x84e22b
// 0084e21e  83f8ff               cmp eax, -1
// 0084e221  7408                 je 0x84e22b
// 0084e223  b857000780           mov eax, 0x80070057
// 0084e228  c21400               ret 0x14
// 0084e22b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084e22f  b903000000           mov ecx, 3
// 0084e234  668908               mov word ptr [eax], cx
// 0084e237  c7400800000000       mov dword ptr [eax + 8], 0
// 0084e23e  33c0                 xor eax, eax
// 0084e240  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleState@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
