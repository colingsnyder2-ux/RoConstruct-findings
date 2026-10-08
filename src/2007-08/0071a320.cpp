// from server: 100% by auto
// roc 2007-08 0071a320  unit: CXTPRibbonControlSystemPopupBarButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a320
//
// 0071a320  8b442404             mov eax, dword ptr [esp + 4]
// 0071a324  c70016000000         mov dword ptr [eax], 0x16
// 0071a32a  c7400416000000       mov dword ptr [eax + 4], 0x16
// 0071a331  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetButtonSize@CXTPRibbonControlSystemPopupBarButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonSystemButton.cpp
