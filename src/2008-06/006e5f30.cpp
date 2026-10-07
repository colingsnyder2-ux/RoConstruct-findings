// roc 2008-06 006e5f30  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5f30
//
// 006e5f30  8d41ac               lea eax, [ecx - 0x54]
// 006e5f33  85c0                 test eax, eax
// 006e5f35  7422                 je 0x6e5f59
// 006e5f37  83782000             cmp dword ptr [eax + 0x20], 0
// 006e5f3b  741c                 je 0x6e5f59
// 006e5f3d  85c0                 test eax, eax
// 006e5f3f  7403                 je 0x6e5f44
// 006e5f41  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e5f44  8b542404             mov edx, dword ptr [esp + 4]
// 006e5f48  52                   push edx
// 006e5f49  681c028500           push 0x85021c
// 006e5f4e  6a00                 push 0
// 006e5f50  50                   push eax
// 006e5f51  e81a2e0000           call 0x6e8d70
// 006e5f56  c20400               ret 4
// 006e5f59  b805400080           mov eax, 0x80004005
// 006e5f5e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleParent@CXTPDockingPaneManager@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
