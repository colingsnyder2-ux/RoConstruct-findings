// roc 2007-03 006c9d20  unit: seg_006c0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9d20
//
// 006c9d20  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c9d24  66c7000300           mov word ptr [eax], 3
// 006c9d29  c7400800000000       mov dword ptr [eax + 8], 0
// 006c9d30  33c0                 xor eax, eax
// 006c9d32  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleState@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
