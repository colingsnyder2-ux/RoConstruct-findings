// roc 2012-06 009d8350  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8350
//
// 009d8350  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8354  85c9                 test ecx, ecx
// 009d8356  7503                 jne 0x9d835b
// 009d8358  33c0                 xor eax, eax
// 009d835a  c3                   ret 
// 009d835b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d835f  8b01                 mov eax, dword ptr [ecx]
// 009d8361  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8364  6a00                 push 0
// 009d8366  52                   push edx
// 009d8367  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d836b  6a03                 push 3
// 009d836d  52                   push edx
// 009d836e  ffd0                 call eax
// 009d8370  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Long@@YAHPAVCXTPPropExchange@@PBDAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
