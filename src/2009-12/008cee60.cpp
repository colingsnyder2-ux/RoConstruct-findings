// roc 2009-12 008cee60  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cee60
//
// 008cee60  56                   push esi
// 008cee61  57                   push edi
// 008cee62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008cee66  8bf1                 mov esi, ecx
// 008cee68  397e04               cmp dword ptr [esi + 4], edi
// 008cee6b  7412                 je 0x8cee7f
// 008cee6d  8b06                 mov eax, dword ptr [esi]
// 008cee6f  8b5004               mov edx, dword ptr [eax + 4]
// 008cee72  897e04               mov dword ptr [esi + 4], edi
// 008cee75  ffd2                 call edx
// 008cee77  57                   push edi
// 008cee78  8bce                 mov ecx, esi
// 008cee7a  e8b1f4ffff           call 0x8ce330
// 008cee7f  5f                   pop edi
// 008cee80  5e                   pop esi
// 008cee81  c20400               ret 4
// copied from an identical function in another client (function ?SetSelectedItem@CXTPTabManager@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp