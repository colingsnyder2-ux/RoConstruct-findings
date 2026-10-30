// roc 2011-06 008d3470  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3470
//
// 008d3470  56                   push esi
// 008d3471  57                   push edi
// 008d3472  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008d3476  8bf1                 mov esi, ecx
// 008d3478  8b06                 mov eax, dword ptr [esi]
// 008d347a  8b5064               mov edx, dword ptr [eax + 0x64]
// 008d347d  57                   push edi
// 008d347e  ffd2                 call edx
// 008d3480  85c0                 test eax, eax
// 008d3482  740e                 je 0x8d3492
// 008d3484  85ff                 test edi, edi
// 008d3486  740a                 je 0x8d3492
// 008d3488  8b06                 mov eax, dword ptr [esi]
// 008d348a  8b5060               mov edx, dword ptr [eax + 0x60]
// 008d348d  57                   push edi
// 008d348e  8bce                 mov ecx, esi
// 008d3490  ffd2                 call edx
// 008d3492  5f                   pop edi
// 008d3493  5e                   pop esi
// 008d3494  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
