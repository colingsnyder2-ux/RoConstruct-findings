// roc 2012-06 00a773a0  unit: CXTPRibbonControlSystemPopupBarButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a773a0
//
// 00a773a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a773a4  c70010000000         mov dword ptr [eax], 0x10
// 00a773aa  c7400410000000       mov dword ptr [eax + 4], 0x10
// 00a773b1  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetIconSize@CXTPRibbonControlSystemPopupBarButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonSystemButton.cpp
