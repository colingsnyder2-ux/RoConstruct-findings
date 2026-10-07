// roc 2011-06 008b9300  unit: CXTPDockingPaneBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b9300
//
// 008b9300  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 008b9303  85c9                 test ecx, ecx
// 008b9305  7418                 je 0x8b931f
// 008b9307  8b542404             mov edx, dword ptr [esp + 4]
// 008b930b  eb03                 jmp 0x8b9310
// 008b930d  8d4900               lea ecx, [ecx]
// 008b9310  8bc1                 mov eax, ecx
// 008b9312  8b09                 mov ecx, dword ptr [ecx]
// 008b9314  83c008               add eax, 8
// 008b9317  3910                 cmp dword ptr [eax], edx
// 008b9319  7406                 je 0x8b9321
// 008b931b  85c9                 test ecx, ecx
// 008b931d  75f1                 jne 0x8b9310
// 008b931f  33c0                 xor eax, eax
// 008b9321  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?FindPaneInfo@CXTPDockingPaneLayout@@AAEPAUXTP_DOCKINGPANE_INFO@@PAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
