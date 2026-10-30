// roc 2010-06 008a6550  unit: CXTPRibbonControlSystemPopupBarListItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a6550
//
// 008a6550  8b9160010000         mov edx, dword ptr [ecx + 0x160]
// 008a6556  8b442404             mov eax, dword ptr [esp + 4]
// 008a655a  8b8964010000         mov ecx, dword ptr [ecx + 0x164]
// 008a6560  8910                 mov dword ptr [eax], edx
// 008a6562  894804               mov dword ptr [eax + 4], ecx
// 008a6565  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetSize@CXTPRibbonControlSystemPopupBarListItem@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
