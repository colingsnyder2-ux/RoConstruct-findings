// roc 2009-06 00766bb0  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766bb0
//
// 00766bb0  8b0d5419a500         mov ecx, dword ptr [0xa51954]
// 00766bb6  e87928fbff           call 0x719434
// 00766bbb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00766bbf  898804010000         mov dword ptr [eax + 0x104], ecx
// 00766bc5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
