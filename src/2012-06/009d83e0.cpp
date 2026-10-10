// roc 2012-06 009d83e0  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d83e0
//
// 009d83e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d83e4  85c9                 test ecx, ecx
// 009d83e6  7503                 jne 0x9d83eb
// 009d83e8  33c0                 xor eax, eax
// 009d83ea  c3                   ret 
// 009d83eb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d83ef  8b01                 mov eax, dword ptr [ecx]
// 009d83f1  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d83f4  6a00                 push 0
// 009d83f6  52                   push edx
// 009d83f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d83fb  6a1e                 push 0x1e
// 009d83fd  52                   push edx
// 009d83fe  ffd0                 call eax
// 009d8400  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_String@@YAHPAVCXTPPropExchange@@PBDAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
