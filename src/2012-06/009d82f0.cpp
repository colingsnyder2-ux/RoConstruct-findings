// roc 2012-06 009d82f0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d82f0
//
// 009d82f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d82f4  85c9                 test ecx, ecx
// 009d82f6  7503                 jne 0x9d82fb
// 009d82f8  33c0                 xor eax, eax
// 009d82fa  c3                   ret 
// 009d82fb  8b01                 mov eax, dword ptr [ecx]
// 009d82fd  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8300  8d542410             lea edx, [esp + 0x10]
// 009d8304  52                   push edx
// 009d8305  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d8309  52                   push edx
// 009d830a  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d830e  6a02                 push 2
// 009d8310  52                   push edx
// 009d8311  ffd0                 call eax
// 009d8313  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Short@@YAHPAVCXTPPropExchange@@PBDAAFF@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
