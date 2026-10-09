// roc 2009-12 00841ec0  unit: CXTPPopupToolBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841ec0
//
// 00841ec0  8b0d48aeb900         mov ecx, dword ptr [0xb9ae48]
// 00841ec6  e89723fbff           call 0x7f4262
// 00841ecb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00841ecf  898804010000         mov dword ptr [eax + 0x104], ecx
// 00841ed5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
