// roc 2008-06 006ee720  unit: CXTPPopupToolBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee720
//
// 006ee720  8b0d38e09700         mov ecx, dword ptr [0x97e038]
// 006ee726  e89728fbff           call 0x6a0fc2
// 006ee72b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ee72f  898804010000         mov dword ptr [eax + 0x104], ecx
// 006ee735  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
