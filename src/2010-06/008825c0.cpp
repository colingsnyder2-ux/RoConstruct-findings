// roc 2010-06 008825c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008825c0
//
// 008825c0  56                   push esi
// 008825c1  8bf1                 mov esi, ecx
// 008825c3  8b06                 mov eax, dword ptr [esi]
// 008825c5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008825c8  ffd2                 call edx
// 008825ca  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008825ce  8988d8000000         mov dword ptr [eax + 0xd8], ecx
// 008825d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008825d8  8990d0000000         mov dword ptr [eax + 0xd0], edx
// 008825de  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008825e2  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 008825e8  8b16                 mov edx, dword ptr [esi]
// 008825ea  8b4204               mov eax, dword ptr [edx + 4]
// 008825ed  8bce                 mov ecx, esi
// 008825ef  ffd0                 call eax
// 008825f1  5e                   pop esi
// 008825f2  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetItemMetrics@CXTPTabManager@@QAEXVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
