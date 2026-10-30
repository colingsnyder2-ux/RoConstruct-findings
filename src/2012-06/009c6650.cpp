// from server: 100% by auto
// roc 2012-06 009c6650  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6650
//
// 009c6650  8d442404             lea eax, [esp + 4]
// 009c6654  50                   push eax
// 009c6655  e896310000           call 0x9c97f0
// 009c665a  85c0                 test eax, eax
// 009c665c  740d                 je 0x9c666b
// 009c665e  83f8ff               cmp eax, -1
// 009c6661  7408                 je 0x9c666b
// 009c6663  b857000780           mov eax, 0x80070057
// 009c6668  c21400               ret 0x14
// 009c666b  680036c100           push 0xc13600
// 009c6670  ff15482bb200         call dword ptr [0xb22b48]
// 009c6676  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c667a  8901                 mov dword ptr [ecx], eax
// 009c667c  33c0                 xor eax, eax
// 009c667e  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleName@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
