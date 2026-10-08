// roc 2009-06 007670e0  unit: CXTPPopupToolBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007670e0
//
// 007670e0  8b0d5819a500         mov ecx, dword ptr [0xa51958]
// 007670e6  e84923fbff           call 0x719434
// 007670eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007670ef  898804010000         mov dword ptr [eax + 0x104], ecx
// 007670f5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
