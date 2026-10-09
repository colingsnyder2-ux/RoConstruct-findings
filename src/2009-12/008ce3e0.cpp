// roc 2009-12 008ce3e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce3e0
//
// 008ce3e0  56                   push esi
// 008ce3e1  8bf1                 mov esi, ecx
// 008ce3e3  8b06                 mov eax, dword ptr [esi]
// 008ce3e5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ce3e8  ffd2                 call edx
// 008ce3ea  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ce3ee  8988d8000000         mov dword ptr [eax + 0xd8], ecx
// 008ce3f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ce3f8  8990d0000000         mov dword ptr [eax + 0xd0], edx
// 008ce3fe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ce402  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 008ce408  8b16                 mov edx, dword ptr [esi]
// 008ce40a  8b4204               mov eax, dword ptr [edx + 4]
// 008ce40d  8bce                 mov ecx, esi
// 008ce40f  ffd0                 call eax
// 008ce411  5e                   pop esi
// 008ce412  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetItemMetrics@CXTPTabManager@@QAEXVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
