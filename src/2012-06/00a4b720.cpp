// roc 2012-06 00a4b720  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b720
//
// 00a4b720  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b724  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00a4b727  8d88000000ff         lea ecx, [eax - 0x1000000]
// 00a4b72d  83f907               cmp ecx, 7
// 00a4b730  7709                 ja 0xa4b73b
// 00a4b732  50                   push eax
// 00a4b733  e8c8240000           call 0xa4dc00
// 00a4b738  83c404               add esp, 4
// 00a4b73b  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetItemColor@CXTPTabManager@@UBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
