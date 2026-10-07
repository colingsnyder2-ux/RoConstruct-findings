// roc 2012-06 00a317a0  unit: CXTPDockingPaneBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a317a0
//
// 00a317a0  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00a317a3  85c9                 test ecx, ecx
// 00a317a5  7418                 je 0xa317bf
// 00a317a7  8b542404             mov edx, dword ptr [esp + 4]
// 00a317ab  eb03                 jmp 0xa317b0
// 00a317ad  8d4900               lea ecx, [ecx]
// 00a317b0  8bc1                 mov eax, ecx
// 00a317b2  8b09                 mov ecx, dword ptr [ecx]
// 00a317b4  83c008               add eax, 8
// 00a317b7  3910                 cmp dword ptr [eax], edx
// 00a317b9  7406                 je 0xa317c1
// 00a317bb  85c9                 test ecx, ecx
// 00a317bd  75f1                 jne 0xa317b0
// 00a317bf  33c0                 xor eax, eax
// 00a317c1  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?FindPaneInfo@CXTPDockingPaneLayout@@AAEPAUXTP_DOCKINGPANE_INFO@@PAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
