// roc 2008-06 0077b030  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b030
//
// 0077b030  8b442404             mov eax, dword ptr [esp + 4]
// 0077b034  85c0                 test eax, eax
// 0077b036  7410                 je 0x77b048
// 0077b038  50                   push eax
// 0077b039  8b01                 mov eax, dword ptr [ecx]
// 0077b03b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077b03e  51                   push ecx
// 0077b03f  ffd2                 call edx
// 0077b041  8bc8                 mov ecx, eax
// 0077b043  e828320000           call 0x77e270
// 0077b048  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
