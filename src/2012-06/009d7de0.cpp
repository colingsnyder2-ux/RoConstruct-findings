// from server: 100% by auto
// roc 2012-06 009d7de0  unit: CXTPPropExchange  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7de0
//
// 009d7de0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 009d7de3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d7de7  50                   push eax
// 009d7de8  51                   push ecx
// 009d7de9  e822ffffff           call 0x9d7d10
// 009d7dee  83c408               add esp, 8
// 009d7df1  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXAAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
