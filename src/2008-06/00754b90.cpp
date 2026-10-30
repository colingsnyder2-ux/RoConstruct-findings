// from server: 100% by auto
// roc 2008-06 00754b90  unit: CXTPDockingPaneBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754b90
//
// 00754b90  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00754b93  85c9                 test ecx, ecx
// 00754b95  7418                 je 0x754baf
// 00754b97  8b542404             mov edx, dword ptr [esp + 4]
// 00754b9b  eb03                 jmp 0x754ba0
// 00754b9d  8d4900               lea ecx, [ecx]
// 00754ba0  8bc1                 mov eax, ecx
// 00754ba2  8b09                 mov ecx, dword ptr [ecx]
// 00754ba4  83c008               add eax, 8
// 00754ba7  3910                 cmp dword ptr [eax], edx
// 00754ba9  7406                 je 0x754bb1
// 00754bab  85c9                 test ecx, ecx
// 00754bad  75f1                 jne 0x754ba0
// 00754baf  33c0                 xor eax, eax
// 00754bb1  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?FindPane@CXTPDockingPaneLayout@@AAEPAUXTP_DOCKINGPANE_INFO@@PAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
