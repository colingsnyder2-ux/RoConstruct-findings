// roc 2008-06 0079aff0  unit: CXTPRibbonControlSystemPopupBarButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079aff0
//
// 0079aff0  8b442404             mov eax, dword ptr [esp + 4]
// 0079aff4  c70016000000         mov dword ptr [eax], 0x16
// 0079affa  c7400416000000       mov dword ptr [eax + 4], 0x16
// 0079b001  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetButtonSize@CXTPRibbonControlSystemPopupBarButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
