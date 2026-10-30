// roc 2009-06 00816970  unit: CXTPRibbonControlSystemPopupBarListItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00816970
//
// 00816970  8b9160010000         mov edx, dword ptr [ecx + 0x160]
// 00816976  8b442404             mov eax, dword ptr [esp + 4]
// 0081697a  8b8964010000         mov ecx, dword ptr [ecx + 0x164]
// 00816980  8910                 mov dword ptr [eax], edx
// 00816982  894804               mov dword ptr [eax + 4], ecx
// 00816985  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetSize@CXTPRibbonControlSystemPopupBarListItem@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
