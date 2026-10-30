// from server: 100% by auto
// roc 2012-06 00a77380  unit: CXTPRibbonControlSystemPopupBarButton  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77380
//
// 00a77380  8b442404             mov eax, dword ptr [esp + 4]
// 00a77384  c70016000000         mov dword ptr [eax], 0x16
// 00a7738a  c7400416000000       mov dword ptr [eax + 4], 0x16
// 00a77391  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetButtonSize@CXTPRibbonControlSystemPopupBarButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonSystemButton.cpp
