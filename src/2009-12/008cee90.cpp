// roc 2009-12 008cee90  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cee90
//
// 008cee90  8b01                 mov eax, dword ptr [ecx]
// 008cee92  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008cee95  56                   push esi
// 008cee96  ffd2                 call edx
// 008cee98  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008cee9c  85c9                 test ecx, ecx
// 008cee9e  740d                 je 0x8ceead
// 008ceea0  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 008ceea6  33f6                 xor esi, esi
// 008ceea8  8911                 mov dword ptr [ecx], edx
// 008ceeaa  897104               mov dword ptr [ecx + 4], esi
// 008ceead  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ceeb1  85c9                 test ecx, ecx
// 008ceeb3  740d                 je 0x8ceec2
// 008ceeb5  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 008ceebb  33f6                 xor esi, esi
// 008ceebd  8911                 mov dword ptr [ecx], edx
// 008ceebf  897104               mov dword ptr [ecx + 4], esi
// 008ceec2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ceec6  5e                   pop esi
// 008ceec7  85c9                 test ecx, ecx
// 008ceec9  740d                 je 0x8ceed8
// 008ceecb  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008ceed1  33d2                 xor edx, edx
// 008ceed3  8901                 mov dword ptr [ecx], eax
// 008ceed5  895104               mov dword ptr [ecx + 4], edx
// 008ceed8  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
