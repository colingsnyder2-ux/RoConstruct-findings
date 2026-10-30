// roc 2012-06 009d8530  unit: CXTPPropExchangeXMLNode  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8530
//
// 009d8530  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8534  85c9                 test ecx, ecx
// 009d8536  7503                 jne 0x9d853b
// 009d8538  33c0                 xor eax, eax
// 009d853a  c3                   ret 
// 009d853b  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d853f  8b01                 mov eax, dword ptr [ecx]
// 009d8541  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009d8544  52                   push edx
// 009d8545  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d8549  52                   push edx
// 009d854a  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d854e  52                   push edx
// 009d854f  ffd0                 call eax
// 009d8551  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Blob@@YAHPAVCXTPPropExchange@@PBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
