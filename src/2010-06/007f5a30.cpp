// roc 2010-06 007f5a30  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f5a30
//
// 007f5a30  8b0d7455c200         mov ecx, dword ptr [0xc25574]
// 007f5a36  e86729fbff           call 0x7a83a2
// 007f5a3b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f5a3f  898804010000         mov dword ptr [eax + 0x104], ecx
// 007f5a45  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
