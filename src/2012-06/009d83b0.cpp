// roc 2012-06 009d83b0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d83b0
//
// 009d83b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d83b4  85c9                 test ecx, ecx
// 009d83b6  7503                 jne 0x9d83bb
// 009d83b8  33c0                 xor eax, eax
// 009d83ba  c3                   ret 
// 009d83bb  8b01                 mov eax, dword ptr [ecx]
// 009d83bd  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d83c0  8d542410             lea edx, [esp + 0x10]
// 009d83c4  52                   push edx
// 009d83c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d83c9  52                   push edx
// 009d83ca  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d83ce  6a0b                 push 0xb
// 009d83d0  52                   push edx
// 009d83d1  ffd0                 call eax
// 009d83d3  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Bool@@YAHPAVCXTPPropExchange@@PBDAAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
