// roc 2008-06 0077afa0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077afa0
//
// 0077afa0  8b442404             mov eax, dword ptr [esp + 4]
// 0077afa4  85c0                 test eax, eax
// 0077afa6  7e02                 jle 0x77afaa
// 0077afa8  33c0                 xor eax, eax
// 0077afaa  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 0077afad  740a                 je 0x77afb9
// 0077afaf  894114               mov dword ptr [ecx + 0x14], eax
// 0077afb2  8b01                 mov eax, dword ptr [ecx]
// 0077afb4  8b5004               mov edx, dword ptr [eax + 4]
// 0077afb7  ffd2                 call edx
// 0077afb9  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetHeaderOffset@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
