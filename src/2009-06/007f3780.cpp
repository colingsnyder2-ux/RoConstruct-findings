// roc 2009-06 007f3780  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3780
//
// 007f3780  8b442404             mov eax, dword ptr [esp + 4]
// 007f3784  85c0                 test eax, eax
// 007f3786  7410                 je 0x7f3798
// 007f3788  50                   push eax
// 007f3789  8b01                 mov eax, dword ptr [ecx]
// 007f378b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f378e  51                   push ecx
// 007f378f  ffd2                 call edx
// 007f3791  8bc8                 mov ecx, eax
// 007f3793  e898310000           call 0x7f6930
// 007f3798  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
