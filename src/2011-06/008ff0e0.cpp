// roc 2011-06 008ff0e0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff0e0
//
// 008ff0e0  8b9160010000         mov edx, dword ptr [ecx + 0x160]
// 008ff0e6  8b442404             mov eax, dword ptr [esp + 4]
// 008ff0ea  8b8964010000         mov ecx, dword ptr [ecx + 0x164]
// 008ff0f0  8910                 mov dword ptr [eax], edx
// 008ff0f2  894804               mov dword ptr [eax + 4], ecx
// 008ff0f5  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetSize@CXTPRibbonControlSystemPopupBarListItem@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
