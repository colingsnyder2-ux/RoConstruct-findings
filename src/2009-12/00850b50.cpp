// roc 2009-12 00850b50  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850b50
//
// 00850b50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850b54  85c9                 test ecx, ecx
// 00850b56  7503                 jne 0x850b5b
// 00850b58  33c0                 xor eax, eax
// 00850b5a  c3                   ret 
// 00850b5b  8b01                 mov eax, dword ptr [ecx]
// 00850b5d  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850b60  8d542410             lea edx, [esp + 0x10]
// 00850b64  52                   push edx
// 00850b65  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850b69  52                   push edx
// 00850b6a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850b6e  6a65                 push 0x65
// 00850b70  52                   push edx
// 00850b71  ffd0                 call eax
// 00850b73  c3                   ret 
// copied from an identical function in another client (function ?PX_Size@@YAHPAVCXTPPropExchange@@PBDAAUtagSIZE@@U2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp