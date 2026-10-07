// roc 2008-06 0075dd70  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dd70
//
// 0075dd70  8d442404             lea eax, [esp + 4]
// 0075dd74  50                   push eax
// 0075dd75  e826a5f8ff           call 0x6e82a0
// 0075dd7a  85c0                 test eax, eax
// 0075dd7c  740d                 je 0x75dd8b
// 0075dd7e  83f8ff               cmp eax, -1
// 0075dd81  7408                 je 0x75dd8b
// 0075dd83  b857000780           mov eax, 0x80070057
// 0075dd88  c21400               ret 0x14
// 0075dd8b  68905f8600           push 0x865f90
// 0075dd90  ff1500298000         call dword ptr [0x802900]
// 0075dd96  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075dd9a  8901                 mov dword ptr [ecx], eax
// 0075dd9c  33c0                 xor eax, eax
// 0075dd9e  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
