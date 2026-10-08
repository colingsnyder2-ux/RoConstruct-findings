// from server: 100% by auto
// roc 2012-06 009c7490  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7490
//
// 009c7490  8d41ac               lea eax, [ecx - 0x54]
// 009c7493  85c0                 test eax, eax
// 009c7495  7422                 je 0x9c74b9
// 009c7497  83782000             cmp dword ptr [eax + 0x20], 0
// 009c749b  741c                 je 0x9c74b9
// 009c749d  85c0                 test eax, eax
// 009c749f  7403                 je 0x9c74a4
// 009c74a1  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c74a4  8b542404             mov edx, dword ptr [esp + 4]
// 009c74a8  52                   push edx
// 009c74a9  68b4fcc300           push 0xc3fcb4
// 009c74ae  6a00                 push 0
// 009c74b0  50                   push eax
// 009c74b1  e80a2e0000           call 0x9ca2c0
// 009c74b6  c20400               ret 4
// 009c74b9  b805400080           mov eax, 0x80004005
// 009c74be  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleParent@CXTPDockingPaneManager@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
