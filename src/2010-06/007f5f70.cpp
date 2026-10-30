// roc 2010-06 007f5f70  unit: CXTPPopupToolBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f5f70
//
// 007f5f70  8b0d7855c200         mov ecx, dword ptr [0xc25578]
// 007f5f76  e82724fbff           call 0x7a83a2
// 007f5f7b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f5f7f  898804010000         mov dword ptr [eax + 0x104], ecx
// 007f5f85  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
