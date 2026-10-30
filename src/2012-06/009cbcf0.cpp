// roc 2012-06 009cbcf0  unit: CXTPPopupToolBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cbcf0
//
// 009cbcf0  8b0dd093e500         mov ecx, dword ptr [0xe593d0]
// 009cbcf6  e8f16dfbff           call 0x982aec
// 009cbcfb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009cbcff  898804010000         mov dword ptr [eax + 0x104], ecx
// 009cbd05  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
