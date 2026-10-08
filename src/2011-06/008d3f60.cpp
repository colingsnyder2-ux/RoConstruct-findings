// roc 2011-06 008d3f60  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3f60
//
// 008d3f60  8b01                 mov eax, dword ptr [ecx]
// 008d3f62  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d3f65  56                   push esi
// 008d3f66  ffd2                 call edx
// 008d3f68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d3f6c  85c9                 test ecx, ecx
// 008d3f6e  740d                 je 0x8d3f7d
// 008d3f70  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 008d3f76  33f6                 xor esi, esi
// 008d3f78  8911                 mov dword ptr [ecx], edx
// 008d3f7a  897104               mov dword ptr [ecx + 4], esi
// 008d3f7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d3f81  85c9                 test ecx, ecx
// 008d3f83  740d                 je 0x8d3f92
// 008d3f85  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 008d3f8b  33f6                 xor esi, esi
// 008d3f8d  8911                 mov dword ptr [ecx], edx
// 008d3f8f  897104               mov dword ptr [ecx + 4], esi
// 008d3f92  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d3f96  5e                   pop esi
// 008d3f97  85c9                 test ecx, ecx
// 008d3f99  740d                 je 0x8d3fa8
// 008d3f9b  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008d3fa1  33d2                 xor edx, edx
// 008d3fa3  8901                 mov dword ptr [ecx], eax
// 008d3fa5  895104               mov dword ptr [ecx + 4], edx
// 008d3fa8  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
