// roc 2012-06 009d8470  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8470
//
// 009d8470  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8474  85c9                 test ecx, ecx
// 009d8476  7503                 jne 0x9d847b
// 009d8478  33c0                 xor eax, eax
// 009d847a  c3                   ret 
// 009d847b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d847f  8b01                 mov eax, dword ptr [ecx]
// 009d8481  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8484  6a00                 push 0
// 009d8486  52                   push edx
// 009d8487  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d848b  6a07                 push 7
// 009d848d  52                   push edx
// 009d848e  ffd0                 call eax
// 009d8490  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_DateTime@@YAHPAVCXTPPropExchange@@PBDAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
