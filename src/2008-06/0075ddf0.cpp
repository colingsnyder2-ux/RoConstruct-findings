// from server: 100% by auto
// roc 2008-06 0075ddf0  unit: CXTPDockingPaneTabbedContainer  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ddf0
//
// 0075ddf0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075ddf4  b903000000           mov ecx, 3
// 0075ddf9  668908               mov word ptr [eax], cx
// 0075ddfc  c7400800000000       mov dword ptr [eax + 8], 0
// 0075de03  33c0                 xor eax, eax
// 0075de05  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleState@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
