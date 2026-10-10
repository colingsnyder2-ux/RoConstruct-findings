// roc 2012-06 009d82c0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d82c0
//
// 009d82c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d82c4  85c9                 test ecx, ecx
// 009d82c6  7503                 jne 0x9d82cb
// 009d82c8  33c0                 xor eax, eax
// 009d82ca  c3                   ret 
// 009d82cb  8b01                 mov eax, dword ptr [ecx]
// 009d82cd  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d82d0  8d542410             lea edx, [esp + 0x10]
// 009d82d4  52                   push edx
// 009d82d5  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d82d9  52                   push edx
// 009d82da  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d82de  6a11                 push 0x11
// 009d82e0  52                   push edx
// 009d82e1  ffd0                 call eax
// 009d82e3  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Byte@@YAHPAVCXTPPropExchange@@PBDAAEE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
