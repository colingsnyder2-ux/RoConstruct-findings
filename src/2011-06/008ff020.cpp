// roc 2011-06 008ff020  unit: CXTPRibbonControlSystemPopupBarButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff020
//
// 008ff020  8b442404             mov eax, dword ptr [esp + 4]
// 008ff024  c70010000000         mov dword ptr [eax], 0x10
// 008ff02a  c7400410000000       mov dword ptr [eax + 4], 0x10
// 008ff031  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetIconSize@CXTPRibbonControlSystemPopupBarButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonSystemButton.cpp
