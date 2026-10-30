// roc 2012-06 009cb7c0  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cb7c0
//
// 009cb7c0  8b0dcc93e500         mov ecx, dword ptr [0xe593cc]
// 009cb7c6  e82173fbff           call 0x982aec
// 009cb7cb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009cb7cf  898804010000         mov dword ptr [eax + 0x104], ecx
// 009cb7d5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
