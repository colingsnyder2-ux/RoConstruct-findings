// roc 2012-06 009d8380  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8380
//
// 009d8380  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8384  85c9                 test ecx, ecx
// 009d8386  7503                 jne 0x9d838b
// 009d8388  33c0                 xor eax, eax
// 009d838a  c3                   ret 
// 009d838b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d838f  8b01                 mov eax, dword ptr [ecx]
// 009d8391  8b4058               mov eax, dword ptr [eax + 0x58]
// 009d8394  6a00                 push 0
// 009d8396  52                   push edx
// 009d8397  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d839b  6a0b                 push 0xb
// 009d839d  52                   push edx
// 009d839e  ffd0                 call eax
// 009d83a0  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Bool@@YAHPAVCXTPPropExchange@@PBDAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
