// from server: 100% by auto
// roc 2008-06 006ee1d0  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee1d0
//
// 006ee1d0  8b0d34e09700         mov ecx, dword ptr [0x97e034]
// 006ee1d6  e8e72dfbff           call 0x6a0fc2
// 006ee1db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ee1df  898804010000         mov dword ptr [eax + 0x104], ecx
// 006ee1e5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
