// roc 2009-12 008ce330  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce330
//
// 008ce330  8b442404             mov eax, dword ptr [esp + 4]
// 008ce334  85c0                 test eax, eax
// 008ce336  7410                 je 0x8ce348
// 008ce338  50                   push eax
// 008ce339  8b01                 mov eax, dword ptr [ecx]
// 008ce33b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ce33e  51                   push ecx
// 008ce33f  ffd2                 call edx
// 008ce341  8bc8                 mov ecx, eax
// 008ce343  e888310000           call 0x8d14d0
// 008ce348  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
