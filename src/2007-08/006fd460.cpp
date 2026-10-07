// roc 2007-08 006fd460  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd460
//
// 006fd460  8b442404             mov eax, dword ptr [esp + 4]
// 006fd464  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006fd467  8d88000000ff         lea ecx, [eax - 0x1000000]
// 006fd46d  83f907               cmp ecx, 7
// 006fd470  7709                 ja 0x6fd47b
// 006fd472  50                   push eax
// 006fd473  e8e8240000           call 0x6ff960
// 006fd478  83c404               add esp, 4
// 006fd47b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetItemColor@CXTPTabManager@@UBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
