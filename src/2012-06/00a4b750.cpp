// roc 2012-06 00a4b750  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b750
//
// 00a4b750  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b754  85c0                 test eax, eax
// 00a4b756  7410                 je 0xa4b768
// 00a4b758  50                   push eax
// 00a4b759  8b01                 mov eax, dword ptr [ecx]
// 00a4b75b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4b75e  51                   push ecx
// 00a4b75f  ffd2                 call edx
// 00a4b761  8bc8                 mov ecx, eax
// 00a4b763  e868310000           call 0xa4e8d0
// 00a4b768  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
