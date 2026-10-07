// roc 2008-06 0077bb70  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077bb70
//
// 0077bb70  8b01                 mov eax, dword ptr [ecx]
// 0077bb72  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077bb75  56                   push esi
// 0077bb76  ffd2                 call edx
// 0077bb78  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077bb7c  85c9                 test ecx, ecx
// 0077bb7e  740d                 je 0x77bb8d
// 0077bb80  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 0077bb86  33f6                 xor esi, esi
// 0077bb88  8911                 mov dword ptr [ecx], edx
// 0077bb8a  897104               mov dword ptr [ecx + 4], esi
// 0077bb8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077bb91  85c9                 test ecx, ecx
// 0077bb93  740d                 je 0x77bba2
// 0077bb95  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 0077bb9b  33f6                 xor esi, esi
// 0077bb9d  8911                 mov dword ptr [ecx], edx
// 0077bb9f  897104               mov dword ptr [ecx + 4], esi
// 0077bba2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077bba6  5e                   pop esi
// 0077bba7  85c9                 test ecx, ecx
// 0077bba9  740d                 je 0x77bbb8
// 0077bbab  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 0077bbb1  33d2                 xor edx, edx
// 0077bbb3  8901                 mov dword ptr [ecx], eax
// 0077bbb5  895104               mov dword ptr [ecx + 4], edx
// 0077bbb8  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
