// roc 2011-06 008532e0  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008532e0
//
// 008532e0  8b0d5c82d100         mov ecx, dword ptr [0xd1825c]
// 008532e6  e87b77fbff           call 0x80aa66
// 008532eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008532ef  898804010000         mov dword ptr [eax + 0x104], ecx
// 008532f5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
