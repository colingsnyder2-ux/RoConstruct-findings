// roc 2012-06 009d84a0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d84a0
//
// 009d84a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d84a4  85c9                 test ecx, ecx
// 009d84a6  7503                 jne 0x9d84ab
// 009d84a8  33c0                 xor eax, eax
// 009d84aa  c3                   ret 
// 009d84ab  8b01                 mov eax, dword ptr [ecx]
// 009d84ad  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d84b0  8d542410             lea edx, [esp + 0x10]
// 009d84b4  52                   push edx
// 009d84b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d84b9  52                   push edx
// 009d84ba  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d84be  6a65                 push 0x65
// 009d84c0  52                   push edx
// 009d84c1  ffd0                 call eax
// 009d84c3  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Size@@YAHPAVCXTPPropExchange@@PBDAAUtagSIZE@@U2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
