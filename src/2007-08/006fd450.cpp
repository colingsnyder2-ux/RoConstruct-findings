// from server: 100% by auto
// roc 2007-08 006fd450  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd450
//
// 006fd450  8b442404             mov eax, dword ptr [esp + 4]
// 006fd454  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006fd457  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetItemIcon@CXTPTabManager@@UBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
