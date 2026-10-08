// roc 2012-06 00a4b7a0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b7a0
//
// 00a4b7a0  56                   push esi
// 00a4b7a1  57                   push edi
// 00a4b7a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a4b7a6  8bf1                 mov esi, ecx
// 00a4b7a8  8b06                 mov eax, dword ptr [esi]
// 00a4b7aa  8b5064               mov edx, dword ptr [eax + 0x64]
// 00a4b7ad  57                   push edi
// 00a4b7ae  ffd2                 call edx
// 00a4b7b0  85c0                 test eax, eax
// 00a4b7b2  740e                 je 0xa4b7c2
// 00a4b7b4  85ff                 test edi, edi
// 00a4b7b6  740a                 je 0xa4b7c2
// 00a4b7b8  8b06                 mov eax, dword ptr [esi]
// 00a4b7ba  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a4b7bd  57                   push edi
// 00a4b7be  8bce                 mov ecx, esi
// 00a4b7c0  ffd2                 call edx
// 00a4b7c2  5f                   pop edi
// 00a4b7c3  5e                   pop esi
// 00a4b7c4  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
