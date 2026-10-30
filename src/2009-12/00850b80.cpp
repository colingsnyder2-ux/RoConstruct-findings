// roc 2009-12 00850b80  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850b80
//
// 00850b80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850b84  85c9                 test ecx, ecx
// 00850b86  7503                 jne 0x850b8b
// 00850b88  33c0                 xor eax, eax
// 00850b8a  c3                   ret 
// 00850b8b  8b01                 mov eax, dword ptr [ecx]
// 00850b8d  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850b90  8d542410             lea edx, [esp + 0x10]
// 00850b94  52                   push edx
// 00850b95  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850b99  52                   push edx
// 00850b9a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850b9e  6a64                 push 0x64
// 00850ba0  52                   push edx
// 00850ba1  ffd0                 call eax
// 00850ba3  c3                   ret 
// copied from an identical function in another client (function ?PX_Rect@@YAHPAVCXTPPropExchange@@PBDAAUtagRECT@@U2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp