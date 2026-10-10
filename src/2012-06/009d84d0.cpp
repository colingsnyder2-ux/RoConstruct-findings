// roc 2012-06 009d84d0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d84d0
//
// 009d84d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d84d4  85c9                 test ecx, ecx
// 009d84d6  7503                 jne 0x9d84db
// 009d84d8  33c0                 xor eax, eax
// 009d84da  c3                   ret 
// 009d84db  8b01                 mov eax, dword ptr [ecx]
// 009d84dd  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d84e0  8d542410             lea edx, [esp + 0x10]
// 009d84e4  52                   push edx
// 009d84e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d84e9  52                   push edx
// 009d84ea  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d84ee  6a64                 push 0x64
// 009d84f0  52                   push edx
// 009d84f1  ffd0                 call eax
// 009d84f3  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Rect@@YAHPAVCXTPPropExchange@@PBDAAUtagRECT@@U2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
