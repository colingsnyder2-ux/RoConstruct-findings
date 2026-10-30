// from server: 100% by auto
// roc 2008-06 0077af70  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077af70
//
// 0077af70  8b442404             mov eax, dword ptr [esp + 4]
// 0077af74  83780402             cmp dword ptr [eax + 4], 2
// 0077af78  7512                 jne 0x77af8c
// 0077af7a  8b4104               mov eax, dword ptr [ecx + 4]
// 0077af7d  85c0                 test eax, eax
// 0077af7f  7406                 je 0x77af87
// 0077af81  8b4068               mov eax, dword ptr [eax + 0x68]
// 0077af84  c20400               ret 4
// 0077af87  33c0                 xor eax, eax
// 0077af89  c20400               ret 4
// 0077af8c  b801000000           mov eax, 1
// 0077af91  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsNavigateButtonAutomaticVisible@CXTPTabManager@@MAEHPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
