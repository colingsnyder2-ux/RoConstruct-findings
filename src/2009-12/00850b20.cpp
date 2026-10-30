// roc 2009-12 00850b20  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850b20
//
// 00850b20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850b24  85c9                 test ecx, ecx
// 00850b26  7503                 jne 0x850b2b
// 00850b28  33c0                 xor eax, eax
// 00850b2a  c3                   ret 
// 00850b2b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00850b2f  8b01                 mov eax, dword ptr [ecx]
// 00850b31  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850b34  6a00                 push 0
// 00850b36  52                   push edx
// 00850b37  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850b3b  6a07                 push 7
// 00850b3d  52                   push edx
// 00850b3e  ffd0                 call eax
// 00850b40  c3                   ret 
// copied from an identical function in another client (function ?PX_DateTime@@YAHPAVCXTPPropExchange@@PBDAAVCOleDateTime@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp