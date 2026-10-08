// roc 2011-06 008d3420  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3420
//
// 008d3420  8b442404             mov eax, dword ptr [esp + 4]
// 008d3424  85c0                 test eax, eax
// 008d3426  7410                 je 0x8d3438
// 008d3428  50                   push eax
// 008d3429  8b01                 mov eax, dword ptr [ecx]
// 008d342b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d342e  51                   push ecx
// 008d342f  ffd2                 call edx
// 008d3431  8bc8                 mov ecx, eax
// 008d3433  e888310000           call 0x8d65c0
// 008d3438  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
