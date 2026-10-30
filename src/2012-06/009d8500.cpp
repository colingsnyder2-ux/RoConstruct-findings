// roc 2012-06 009d8500  unit: CXTPPropExchangeXMLNode  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8500
//
// 009d8500  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d8504  85c9                 test ecx, ecx
// 009d8506  7503                 jne 0x9d850b
// 009d8508  33c0                 xor eax, eax
// 009d850a  c3                   ret 
// 009d850b  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d850f  8b01                 mov eax, dword ptr [ecx]
// 009d8511  8b4060               mov eax, dword ptr [eax + 0x60]
// 009d8514  52                   push edx
// 009d8515  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d8519  52                   push edx
// 009d851a  8b542410             mov edx, dword ptr [esp + 0x10]
// 009d851e  52                   push edx
// 009d851f  ffd0                 call eax
// 009d8521  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_RuntimeClass@@YAHPAVCXTPPropExchange@@PBDAAPAUCRuntimeClass@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
