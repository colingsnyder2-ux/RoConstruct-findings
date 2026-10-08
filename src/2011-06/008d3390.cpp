// from server: 100% by auto
// roc 2011-06 008d3390  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3390
//
// 008d3390  8b442404             mov eax, dword ptr [esp + 4]
// 008d3394  85c0                 test eax, eax
// 008d3396  7e02                 jle 0x8d339a
// 008d3398  33c0                 xor eax, eax
// 008d339a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 008d339d  740a                 je 0x8d33a9
// 008d339f  894114               mov dword ptr [ecx + 0x14], eax
// 008d33a2  8b01                 mov eax, dword ptr [ecx]
// 008d33a4  8b5004               mov edx, dword ptr [eax + 4]
// 008d33a7  ffd2                 call edx
// 008d33a9  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetHeaderOffset@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
