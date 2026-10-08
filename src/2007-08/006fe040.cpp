// from server: 100% by auto
// roc 2007-08 006fe040  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe040
//
// 006fe040  8b01                 mov eax, dword ptr [ecx]
// 006fe042  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fe045  56                   push esi
// 006fe046  ffd2                 call edx
// 006fe048  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fe04c  85c9                 test ecx, ecx
// 006fe04e  740d                 je 0x6fe05d
// 006fe050  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 006fe056  33f6                 xor esi, esi
// 006fe058  8911                 mov dword ptr [ecx], edx
// 006fe05a  897104               mov dword ptr [ecx + 4], esi
// 006fe05d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fe061  85c9                 test ecx, ecx
// 006fe063  740d                 je 0x6fe072
// 006fe065  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 006fe06b  33f6                 xor esi, esi
// 006fe06d  8911                 mov dword ptr [ecx], edx
// 006fe06f  897104               mov dword ptr [ecx + 4], esi
// 006fe072  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fe076  85c9                 test ecx, ecx
// 006fe078  5e                   pop esi
// 006fe079  740d                 je 0x6fe088
// 006fe07b  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006fe081  33d2                 xor edx, edx
// 006fe083  8901                 mov dword ptr [ecx], eax
// 006fe085  895104               mov dword ptr [ecx + 4], edx
// 006fe088  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
