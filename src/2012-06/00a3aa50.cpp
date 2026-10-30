// roc 2012-06 00a3aa50  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3aa50
//
// 00a3aa50  8d442404             lea eax, [esp + 4]
// 00a3aa54  50                   push eax
// 00a3aa55  e896edf8ff           call 0x9c97f0
// 00a3aa5a  85c0                 test eax, eax
// 00a3aa5c  740d                 je 0xa3aa6b
// 00a3aa5e  83f8ff               cmp eax, -1
// 00a3aa61  7408                 je 0xa3aa6b
// 00a3aa63  b857000780           mov eax, 0x80070057
// 00a3aa68  c21400               ret 0x14
// 00a3aa6b  68c817c200           push 0xc217c8
// 00a3aa70  ff15482bb200         call dword ptr [0xb22b48]
// 00a3aa76  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3aa7a  8901                 mov dword ptr [ecx], eax
// 00a3aa7c  33c0                 xor eax, eax
// 00a3aa7e  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
