// roc 2009-12 008ce2c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce2c0
//
// 008ce2c0  51                   push ecx
// 008ce2c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ce2c5  56                   push esi
// 008ce2c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ce2ca  83c054               add eax, 0x54
// 008ce2cd  50                   push eax
// 008ce2ce  8bce                 mov ecx, esi
// 008ce2d0  c744240800000000     mov dword ptr [esp + 8], 0
// 008ce2d8  ff1594de9800         call dword ptr [0x98de94]
// 008ce2de  8bc6                 mov eax, esi
// 008ce2e0  5e                   pop esi
// 008ce2e1  59                   pop ecx
// 008ce2e2  c20800               ret 8
// copied from an identical function in another client (function ?GetItemCaption@CXTPTabManager@@UBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBVCXTPTabManagerItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp