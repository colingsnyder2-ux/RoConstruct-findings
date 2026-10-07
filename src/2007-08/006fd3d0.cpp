// roc 2007-08 006fd3d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd3d0
//
// 006fd3d0  8b442404             mov eax, dword ptr [esp + 4]
// 006fd3d4  83780402             cmp dword ptr [eax + 4], 2
// 006fd3d8  7512                 jne 0x6fd3ec
// 006fd3da  8b4104               mov eax, dword ptr [ecx + 4]
// 006fd3dd  85c0                 test eax, eax
// 006fd3df  7406                 je 0x6fd3e7
// 006fd3e1  8b4068               mov eax, dword ptr [eax + 0x68]
// 006fd3e4  c20400               ret 4
// 006fd3e7  33c0                 xor eax, eax
// 006fd3e9  c20400               ret 4
// 006fd3ec  b801000000           mov eax, 1
// 006fd3f1  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?IsNavigateButtonAutomaticVisible@CXTPTabManager@@MAEHPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
