// roc 2008-06 0079b010  unit: CXTPRibbonControlSystemPopupBarButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079b010
//
// 0079b010  8b442404             mov eax, dword ptr [esp + 4]
// 0079b014  c70010000000         mov dword ptr [eax], 0x10
// 0079b01a  c7400410000000       mov dword ptr [eax + 4], 0x10
// 0079b021  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetIconSize@CXTPRibbonControlSystemPopupBarButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
