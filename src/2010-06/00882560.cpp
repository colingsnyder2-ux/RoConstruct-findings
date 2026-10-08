// roc 2010-06 00882560  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882560
//
// 00882560  56                   push esi
// 00882561  57                   push edi
// 00882562  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00882566  8bf1                 mov esi, ecx
// 00882568  8b06                 mov eax, dword ptr [esi]
// 0088256a  8b5064               mov edx, dword ptr [eax + 0x64]
// 0088256d  57                   push edi
// 0088256e  ffd2                 call edx
// 00882570  85c0                 test eax, eax
// 00882572  740e                 je 0x882582
// 00882574  85ff                 test edi, edi
// 00882576  740a                 je 0x882582
// 00882578  8b06                 mov eax, dword ptr [esi]
// 0088257a  8b5060               mov edx, dword ptr [eax + 0x60]
// 0088257d  57                   push edi
// 0088257e  8bce                 mov ecx, esi
// 00882580  ffd2                 call edx
// 00882582  5f                   pop edi
// 00882583  5e                   pop esi
// 00882584  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
