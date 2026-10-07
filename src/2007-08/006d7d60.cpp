// roc 2007-08 006d7d60  unit: CXTPDockingPaneBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7d60
//
// 006d7d60  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 006d7d63  85c9                 test ecx, ecx
// 006d7d65  7418                 je 0x6d7d7f
// 006d7d67  8b542404             mov edx, dword ptr [esp + 4]
// 006d7d6b  eb03                 jmp 0x6d7d70
// 006d7d6d  8d4900               lea ecx, [ecx]
// 006d7d70  8bc1                 mov eax, ecx
// 006d7d72  8b09                 mov ecx, dword ptr [ecx]
// 006d7d74  83c008               add eax, 8
// 006d7d77  3910                 cmp dword ptr [eax], edx
// 006d7d79  7406                 je 0x6d7d81
// 006d7d7b  85c9                 test ecx, ecx
// 006d7d7d  75f1                 jne 0x6d7d70
// 006d7d7f  33c0                 xor eax, eax
// 006d7d81  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?FindPane@CXTPDockingPaneLayout@@AAEPAUXTP_DOCKINGPANE_INFO@@PAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
