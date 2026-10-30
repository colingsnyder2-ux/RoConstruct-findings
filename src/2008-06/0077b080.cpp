// from server: 100% by auto
// roc 2008-06 0077b080  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b080
//
// 0077b080  56                   push esi
// 0077b081  57                   push edi
// 0077b082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077b086  8bf1                 mov esi, ecx
// 0077b088  8b06                 mov eax, dword ptr [esi]
// 0077b08a  8b5064               mov edx, dword ptr [eax + 0x64]
// 0077b08d  57                   push edi
// 0077b08e  ffd2                 call edx
// 0077b090  85c0                 test eax, eax
// 0077b092  740e                 je 0x77b0a2
// 0077b094  85ff                 test edi, edi
// 0077b096  740a                 je 0x77b0a2
// 0077b098  8b06                 mov eax, dword ptr [esi]
// 0077b09a  8b5060               mov edx, dword ptr [eax + 0x60]
// 0077b09d  57                   push edi
// 0077b09e  8bce                 mov ecx, esi
// 0077b0a0  ffd2                 call edx
// 0077b0a2  5f                   pop edi
// 0077b0a3  5e                   pop esi
// 0077b0a4  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetFocusedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
