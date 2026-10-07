// roc 2007-08 0066e2b0  unit: CXTPDockingPaneManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e2b0
//
// 0066e2b0  8d442404             lea eax, [esp + 4]
// 0066e2b4  50                   push eax
// 0066e2b5  e816310000           call 0x6713d0
// 0066e2ba  85c0                 test eax, eax
// 0066e2bc  740d                 je 0x66e2cb
// 0066e2be  83f8ff               cmp eax, -1
// 0066e2c1  7408                 je 0x66e2cb
// 0066e2c3  b857000780           mov eax, 0x80070057
// 0066e2c8  c21400               ret 0x14
// 0066e2cb  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066e2cf  66c7000300           mov word ptr [eax], 3
// 0066e2d4  c7400800000000       mov dword ptr [eax + 8], 0
// 0066e2db  33c0                 xor eax, eax
// 0066e2dd  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleState@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
