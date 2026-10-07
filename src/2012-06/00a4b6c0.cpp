// roc 2012-06 00a4b6c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b6c0
//
// 00a4b6c0  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b6c4  85c0                 test eax, eax
// 00a4b6c6  7e02                 jle 0xa4b6ca
// 00a4b6c8  33c0                 xor eax, eax
// 00a4b6ca  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 00a4b6cd  740a                 je 0xa4b6d9
// 00a4b6cf  894114               mov dword ptr [ecx + 0x14], eax
// 00a4b6d2  8b01                 mov eax, dword ptr [ecx]
// 00a4b6d4  8b5004               mov edx, dword ptr [eax + 4]
// 00a4b6d7  ffd2                 call edx
// 00a4b6d9  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetHeaderOffset@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
