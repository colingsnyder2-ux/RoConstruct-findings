// roc 2012-06 009d8320  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8320
//
// 009d8320  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8324  85c9                 test ecx, ecx
// 009d8326  7503                 jne 0x9d832b
// 009d8328  33c0                 xor eax, eax
// 009d832a  c3                   ret 
// 009d832b  8b01                 mov eax, dword ptr [ecx]
// 009d832d  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8330  8d542410             lea edx, [esp + 0x10]
// 009d8334  52                   push edx
// 009d8335  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d8339  52                   push edx
// 009d833a  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d833e  6a03                 push 3
// 009d8340  52                   push edx
// 009d8341  ffd0                 call eax
// 009d8343  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Long@@YAHPAVCXTPPropExchange@@PBDAAJJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
