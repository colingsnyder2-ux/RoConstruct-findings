// roc 2009-12 008ced90  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ced90
//
// 008ced90  837c240400           cmp dword ptr [esp + 4], 0
// 008ced95  7412                 je 0x8ceda9
// 008ced97  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008ced9a  2b818c000000         sub eax, dword ptr [ecx + 0x8c]
// 008ceda0  89442404             mov dword ptr [esp + 4], eax
// 008ceda4  e9f7f4ffff           jmp 0x8ce2a0
// 008ceda9  8b918c000000         mov edx, dword ptr [ecx + 0x8c]
// 008cedaf  035114               add edx, dword ptr [ecx + 0x14]
// 008cedb2  89542404             mov dword ptr [esp + 4], edx
// 008cedb6  e9e5f4ffff           jmp 0x8ce2a0
// copied from an identical function in another client (function ?OnScrollHeader@CXTPTabManager@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp