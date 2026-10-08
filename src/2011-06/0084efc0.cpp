// from server: 100% by auto
// roc 2011-06 0084efc0  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084efc0
//
// 0084efc0  8d41ac               lea eax, [ecx - 0x54]
// 0084efc3  85c0                 test eax, eax
// 0084efc5  7422                 je 0x84efe9
// 0084efc7  83782000             cmp dword ptr [eax + 0x20], 0
// 0084efcb  741c                 je 0x84efe9
// 0084efcd  85c0                 test eax, eax
// 0084efcf  7403                 je 0x84efd4
// 0084efd1  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084efd4  8b542404             mov edx, dword ptr [esp + 4]
// 0084efd8  52                   push edx
// 0084efd9  68a091af00           push 0xaf91a0
// 0084efde  6a00                 push 0
// 0084efe0  50                   push eax
// 0084efe1  e81a2e0000           call 0x851e00
// 0084efe6  c20400               ret 4
// 0084efe9  b805400080           mov eax, 0x80004005
// 0084efee  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleParent@CXTPDockingPaneManager@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
