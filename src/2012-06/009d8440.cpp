// roc 2012-06 009d8440  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8440
//
// 009d8440  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8444  85c9                 test ecx, ecx
// 009d8446  7503                 jne 0x9d844b
// 009d8448  33c0                 xor eax, eax
// 009d844a  c3                   ret 
// 009d844b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d844f  8b01                 mov eax, dword ptr [ecx]
// 009d8451  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8454  6a00                 push 0
// 009d8456  52                   push edx
// 009d8457  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d845b  6a05                 push 5
// 009d845d  52                   push edx
// 009d845e  ffd0                 call eax
// 009d8460  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Double@@YAHPAVCXTPPropExchange@@PBDAAN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
