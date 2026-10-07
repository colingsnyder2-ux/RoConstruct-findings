// roc 2008-06 006fcdc0  unit: CXTPPropExchange  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcdc0
//
// 006fcdc0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006fcdc3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fcdc7  50                   push eax
// 006fcdc8  51                   push ecx
// 006fcdc9  e822ffffff           call 0x6fccf0
// 006fcdce  83c408               add esp, 8
// 006fcdd1  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXAAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
