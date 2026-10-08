// from server: 100% by auto
// roc 2011-06 008d33e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d33e0
//
// 008d33e0  8b442404             mov eax, dword ptr [esp + 4]
// 008d33e4  8b403c               mov eax, dword ptr [eax + 0x3c]
// 008d33e7  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetItemIcon@CXTPTabManager@@UBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
