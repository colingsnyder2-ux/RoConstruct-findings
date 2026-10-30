// from server: 100% by auto
// roc 2008-06 0077b0e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b0e0
//
// 0077b0e0  56                   push esi
// 0077b0e1  8bf1                 mov esi, ecx
// 0077b0e3  8b06                 mov eax, dword ptr [esi]
// 0077b0e5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077b0e8  ffd2                 call edx
// 0077b0ea  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077b0ee  8988d8000000         mov dword ptr [eax + 0xd8], ecx
// 0077b0f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077b0f8  8990d0000000         mov dword ptr [eax + 0xd0], edx
// 0077b0fe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077b102  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 0077b108  8b16                 mov edx, dword ptr [esi]
// 0077b10a  8b4204               mov eax, dword ptr [edx + 4]
// 0077b10d  8bce                 mov ecx, esi
// 0077b10f  ffd0                 call eax
// 0077b111  5e                   pop esi
// 0077b112  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetItemMetrics@CXTPTabManager@@QAEXVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
