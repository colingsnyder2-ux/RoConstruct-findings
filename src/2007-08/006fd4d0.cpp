// from server: 100% by auto
// roc 2007-08 006fd4d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd4d0
//
// 006fd4d0  56                   push esi
// 006fd4d1  57                   push edi
// 006fd4d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006fd4d6  8bf1                 mov esi, ecx
// 006fd4d8  8b06                 mov eax, dword ptr [esi]
// 006fd4da  8b5064               mov edx, dword ptr [eax + 0x64]
// 006fd4dd  57                   push edi
// 006fd4de  ffd2                 call edx
// 006fd4e0  85c0                 test eax, eax
// 006fd4e2  740e                 je 0x6fd4f2
// 006fd4e4  85ff                 test edi, edi
// 006fd4e6  740a                 je 0x6fd4f2
// 006fd4e8  8b06                 mov eax, dword ptr [esi]
// 006fd4ea  8b5060               mov edx, dword ptr [eax + 0x60]
// 006fd4ed  57                   push edi
// 006fd4ee  8bce                 mov ecx, esi
// 006fd4f0  ffd2                 call edx
// 006fd4f2  5f                   pop edi
// 006fd4f3  5e                   pop esi
// 006fd4f4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
