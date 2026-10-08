// roc 2010-06 00882510  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882510
//
// 00882510  8b442404             mov eax, dword ptr [esp + 4]
// 00882514  85c0                 test eax, eax
// 00882516  7410                 je 0x882528
// 00882518  50                   push eax
// 00882519  8b01                 mov eax, dword ptr [ecx]
// 0088251b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0088251e  51                   push ecx
// 0088251f  ffd2                 call edx
// 00882521  8bc8                 mov ecx, eax
// 00882523  e858310000           call 0x885680
// 00882528  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
