// roc 2008-06 0077b000  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b000
//
// 0077b000  8b442404             mov eax, dword ptr [esp + 4]
// 0077b004  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0077b007  8d88000000ff         lea ecx, [eax - 0x1000000]
// 0077b00d  83f907               cmp ecx, 7
// 0077b010  7709                 ja 0x77b01b
// 0077b012  50                   push eax
// 0077b013  e858250000           call 0x77d570
// 0077b018  83c404               add esp, 4
// 0077b01b  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemColor@CXTPTabManager@@UBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
