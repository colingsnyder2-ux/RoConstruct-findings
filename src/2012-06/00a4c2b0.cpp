// roc 2012-06 00a4c2b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c2b0
//
// 00a4c2b0  8b01                 mov eax, dword ptr [ecx]
// 00a4c2b2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4c2b5  56                   push esi
// 00a4c2b6  ffd2                 call edx
// 00a4c2b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a4c2bc  85c9                 test ecx, ecx
// 00a4c2be  740d                 je 0xa4c2cd
// 00a4c2c0  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 00a4c2c6  33f6                 xor esi, esi
// 00a4c2c8  8911                 mov dword ptr [ecx], edx
// 00a4c2ca  897104               mov dword ptr [ecx + 4], esi
// 00a4c2cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a4c2d1  85c9                 test ecx, ecx
// 00a4c2d3  740d                 je 0xa4c2e2
// 00a4c2d5  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 00a4c2db  33f6                 xor esi, esi
// 00a4c2dd  8911                 mov dword ptr [ecx], edx
// 00a4c2df  897104               mov dword ptr [ecx + 4], esi
// 00a4c2e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4c2e6  5e                   pop esi
// 00a4c2e7  85c9                 test ecx, ecx
// 00a4c2e9  740d                 je 0xa4c2f8
// 00a4c2eb  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 00a4c2f1  33d2                 xor edx, edx
// 00a4c2f3  8901                 mov dword ptr [ecx], eax
// 00a4c2f5  895104               mov dword ptr [ecx + 4], edx
// 00a4c2f8  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
