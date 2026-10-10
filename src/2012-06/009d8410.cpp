// roc 2012-06 009d8410  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8410
//
// 009d8410  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8414  85c9                 test ecx, ecx
// 009d8416  7503                 jne 0x9d841b
// 009d8418  33c0                 xor eax, eax
// 009d841a  c3                   ret 
// 009d841b  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d841f  8b01                 mov eax, dword ptr [ecx]
// 009d8421  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8424  52                   push edx
// 009d8425  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d8429  52                   push edx
// 009d842a  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d842e  6a1e                 push 0x1e
// 009d8430  52                   push edx
// 009d8431  ffd0                 call eax
// 009d8433  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_String@@YAHPAVCXTPPropExchange@@PBDAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
