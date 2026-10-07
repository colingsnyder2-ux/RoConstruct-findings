// roc 2011-06 008d33f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d33f0
//
// 008d33f0  8b442404             mov eax, dword ptr [esp + 4]
// 008d33f4  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008d33f7  8d88000000ff         lea ecx, [eax - 0x1000000]
// 008d33fd  83f907               cmp ecx, 7
// 008d3400  7709                 ja 0x8d340b
// 008d3402  50                   push eax
// 008d3403  e8a8240000           call 0x8d58b0
// 008d3408  83c404               add esp, 4
// 008d340b  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetItemColor@CXTPTabManager@@UBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
