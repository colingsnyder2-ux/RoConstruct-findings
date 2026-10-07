// roc 2012-06 00a4b690  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b690
//
// 00a4b690  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b694  83780402             cmp dword ptr [eax + 4], 2
// 00a4b698  7512                 jne 0xa4b6ac
// 00a4b69a  8b4104               mov eax, dword ptr [ecx + 4]
// 00a4b69d  85c0                 test eax, eax
// 00a4b69f  7406                 je 0xa4b6a7
// 00a4b6a1  8b4068               mov eax, dword ptr [eax + 0x68]
// 00a4b6a4  c20400               ret 4
// 00a4b6a7  33c0                 xor eax, eax
// 00a4b6a9  c20400               ret 4
// 00a4b6ac  b801000000           mov eax, 1
// 00a4b6b1  c20400               ret 4
// library xtp-13.2.1/Source\TabManager\XTPTabManager.cpp (function ?IsNavigateButtonAutomaticVisible@CXTPTabManager@@MAEHPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabManager.cpp
