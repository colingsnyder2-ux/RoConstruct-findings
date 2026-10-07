// roc 2007-08 006e0da0  unit: CXTPDockingPaneTabbedContainer  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0da0
//
// 006e0da0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e0da4  66c7000300           mov word ptr [eax], 3
// 006e0da9  c7400800000000       mov dword ptr [eax + 8], 0
// 006e0db0  33c0                 xor eax, eax
// 006e0db2  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleState@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
