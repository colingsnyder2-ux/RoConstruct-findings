// roc 2009-06 007f42e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f42e0
//
// 007f42e0  8b01                 mov eax, dword ptr [ecx]
// 007f42e2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f42e5  56                   push esi
// 007f42e6  ffd2                 call edx
// 007f42e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f42ec  85c9                 test ecx, ecx
// 007f42ee  740d                 je 0x7f42fd
// 007f42f0  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 007f42f6  33f6                 xor esi, esi
// 007f42f8  8911                 mov dword ptr [ecx], edx
// 007f42fa  897104               mov dword ptr [ecx + 4], esi
// 007f42fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f4301  85c9                 test ecx, ecx
// 007f4303  740d                 je 0x7f4312
// 007f4305  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 007f430b  33f6                 xor esi, esi
// 007f430d  8911                 mov dword ptr [ecx], edx
// 007f430f  897104               mov dword ptr [ecx + 4], esi
// 007f4312  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f4316  5e                   pop esi
// 007f4317  85c9                 test ecx, ecx
// 007f4319  740d                 je 0x7f4328
// 007f431b  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 007f4321  33d2                 xor edx, edx
// 007f4323  8901                 mov dword ptr [ecx], eax
// 007f4325  895104               mov dword ptr [ecx + 4], edx
// 007f4328  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetItemMetrics@CXTPTabManager@@UBEXPAVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
