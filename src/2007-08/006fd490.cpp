// roc 2007-08 006fd490  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd490
//
// 006fd490  8b442404             mov eax, dword ptr [esp + 4]
// 006fd494  85c0                 test eax, eax
// 006fd496  7410                 je 0x6fd4a8
// 006fd498  50                   push eax
// 006fd499  8b01                 mov eax, dword ptr [ecx]
// 006fd49b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fd49e  51                   push ecx
// 006fd49f  ffd2                 call edx
// 006fd4a1  8bc8                 mov ecx, eax
// 006fd4a3  e8b8320000           call 0x700760
// 006fd4a8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
