// roc 2010-06 00883070  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00883070
//
// 00883070  8b01                 mov eax, dword ptr [ecx]
// 00883072  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00883075  56                   push esi
// 00883076  ffd2                 call edx
// 00883078  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088307c  85c9                 test ecx, ecx
// 0088307e  740d                 je 0x88308d
// 00883080  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 00883086  33f6                 xor esi, esi
// 00883088  8911                 mov dword ptr [ecx], edx
// 0088308a  897104               mov dword ptr [ecx + 4], esi
// 0088308d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00883091  85c9                 test ecx, ecx
// 00883093  740d                 je 0x8830a2
// 00883095  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 0088309b  33f6                 xor esi, esi
// 0088309d  8911                 mov dword ptr [ecx], edx
// 0088309f  897104               mov dword ptr [ecx + 4], esi
// 008830a2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008830a6  5e                   pop esi
// 008830a7  85c9                 test ecx, ecx
// 008830a9  740d                 je 0x8830b8
// 008830ab  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008830b1  33d2                 xor edx, edx
// 008830b3  8901                 mov dword ptr [ecx], eax
// 008830b5  895104               mov dword ptr [ecx + 4], edx
// 008830b8  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
