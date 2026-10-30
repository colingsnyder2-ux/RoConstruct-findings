// roc 2009-12 008ce380  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce380
//
// 008ce380  56                   push esi
// 008ce381  57                   push edi
// 008ce382  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ce386  8bf1                 mov esi, ecx
// 008ce388  8b06                 mov eax, dword ptr [esi]
// 008ce38a  8b5064               mov edx, dword ptr [eax + 0x64]
// 008ce38d  57                   push edi
// 008ce38e  ffd2                 call edx
// 008ce390  85c0                 test eax, eax
// 008ce392  740e                 je 0x8ce3a2
// 008ce394  85ff                 test edi, edi
// 008ce396  740a                 je 0x8ce3a2
// 008ce398  8b06                 mov eax, dword ptr [esi]
// 008ce39a  8b5060               mov edx, dword ptr [eax + 0x60]
// 008ce39d  57                   push edi
// 008ce39e  8bce                 mov ecx, esi
// 008ce3a0  ffd2                 call edx
// 008ce3a2  5f                   pop edi
// 008ce3a3  5e                   pop esi
// 008ce3a4  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
