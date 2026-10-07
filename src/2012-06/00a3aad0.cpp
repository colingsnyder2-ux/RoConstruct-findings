// roc 2012-06 00a3aad0  unit: CXTPDockingPaneTabbedContainer  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3aad0
//
// 00a3aad0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3aad4  b903000000           mov ecx, 3
// 00a3aad9  668908               mov word ptr [eax], cx
// 00a3aadc  c7400800000000       mov dword ptr [eax + 8], 0
// 00a3aae3  33c0                 xor eax, eax
// 00a3aae5  c21400               ret 0x14
// library xtp-13.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleState@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
