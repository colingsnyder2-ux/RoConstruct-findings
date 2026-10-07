// roc 2011-06 0085f9d0  unit: CXTPPropExchange  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f9d0
//
// 0085f9d0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0085f9d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085f9d7  50                   push eax
// 0085f9d8  51                   push ecx
// 0085f9d9  e822ffffff           call 0x85f900
// 0085f9de  83c408               add esp, 8
// 0085f9e1  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXAAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
