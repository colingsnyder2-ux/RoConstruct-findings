// roc 2009-06 007f37d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f37d0
//
// 007f37d0  56                   push esi
// 007f37d1  57                   push edi
// 007f37d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f37d6  8bf1                 mov esi, ecx
// 007f37d8  8b06                 mov eax, dword ptr [esi]
// 007f37da  8b5064               mov edx, dword ptr [eax + 0x64]
// 007f37dd  57                   push edi
// 007f37de  ffd2                 call edx
// 007f37e0  85c0                 test eax, eax
// 007f37e2  740e                 je 0x7f37f2
// 007f37e4  85ff                 test edi, edi
// 007f37e6  740a                 je 0x7f37f2
// 007f37e8  8b06                 mov eax, dword ptr [esi]
// 007f37ea  8b5060               mov edx, dword ptr [eax + 0x60]
// 007f37ed  57                   push edi
// 007f37ee  8bce                 mov ecx, esi
// 007f37f0  ffd2                 call edx
// 007f37f2  5f                   pop edi
// 007f37f3  5e                   pop esi
// 007f37f4  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
