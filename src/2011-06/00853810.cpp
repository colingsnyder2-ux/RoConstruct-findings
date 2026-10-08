// roc 2011-06 00853810  unit: CXTPPopupToolBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853810
//
// 00853810  8b0d6082d100         mov ecx, dword ptr [0xd18260]
// 00853816  e84b72fbff           call 0x80aa66
// 0085381b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085381f  898804010000         mov dword ptr [eax + 0x104], ecx
// 00853825  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
