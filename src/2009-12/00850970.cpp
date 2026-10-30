// roc 2009-12 00850970  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850970
//
// 00850970  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850974  85c9                 test ecx, ecx
// 00850976  7503                 jne 0x85097b
// 00850978  33c0                 xor eax, eax
// 0085097a  c3                   ret 
// 0085097b  8b01                 mov eax, dword ptr [ecx]
// 0085097d  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850980  8d542410             lea edx, [esp + 0x10]
// 00850984  52                   push edx
// 00850985  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850989  52                   push edx
// 0085098a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085098e  6a11                 push 0x11
// 00850990  52                   push edx
// 00850991  ffd0                 call eax
// 00850993  c3                   ret 
// copied from an identical function in another client (function ?PX_Byte@@YAHPAVCXTPPropExchange@@PBDAAEE@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp