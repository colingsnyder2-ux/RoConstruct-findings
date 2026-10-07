// roc 2008-06 006e5100  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5100
//
// 006e5100  8d442404             lea eax, [esp + 4]
// 006e5104  50                   push eax
// 006e5105  e896310000           call 0x6e82a0
// 006e510a  85c0                 test eax, eax
// 006e510c  740d                 je 0x6e511b
// 006e510e  83f8ff               cmp eax, -1
// 006e5111  7408                 je 0x6e511b
// 006e5113  b857000780           mov eax, 0x80070057
// 006e5118  c21400               ret 0x14
// 006e511b  68006b8500           push 0x856b00
// 006e5120  ff1500298000         call dword ptr [0x802900]
// 006e5126  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e512a  8901                 mov dword ptr [ecx], eax
// 006e512c  33c0                 xor eax, eax
// 006e512e  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleName@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
