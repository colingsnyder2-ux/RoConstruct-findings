// roc 2007-08 0066f060  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066f060
//
// 0066f060  8d41ac               lea eax, [ecx - 0x54]
// 0066f063  85c0                 test eax, eax
// 0066f065  7422                 je 0x66f089
// 0066f067  83782000             cmp dword ptr [eax + 0x20], 0
// 0066f06b  741c                 je 0x66f089
// 0066f06d  85c0                 test eax, eax
// 0066f06f  7403                 je 0x66f074
// 0066f071  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066f074  8b542404             mov edx, dword ptr [esp + 4]
// 0066f078  52                   push edx
// 0066f079  687c4e7c00           push 0x7c4e7c
// 0066f07e  6a00                 push 0
// 0066f080  50                   push eax
// 0066f081  e81a2e0000           call 0x671ea0
// 0066f086  c20400               ret 4
// 0066f089  b805400080           mov eax, 0x80004005
// 0066f08e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleParent@CXTPDockingPaneManager@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
