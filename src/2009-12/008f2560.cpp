// roc 2009-12 008f2560  unit: CXTPRibbonControlSystemPopupBarListItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2560
//
// 008f2560  8b9160010000         mov edx, dword ptr [ecx + 0x160]
// 008f2566  8b442404             mov eax, dword ptr [esp + 4]
// 008f256a  8b8964010000         mov ecx, dword ptr [ecx + 0x164]
// 008f2570  8910                 mov dword ptr [eax], edx
// 008f2572  894804               mov dword ptr [eax + 4], ecx
// 008f2575  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetSize@CXTPRibbonControlSystemPopupBarListItem@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
