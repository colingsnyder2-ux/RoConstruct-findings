// roc 2009-12 00850af0  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850af0
//
// 00850af0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850af4  85c9                 test ecx, ecx
// 00850af6  7503                 jne 0x850afb
// 00850af8  33c0                 xor eax, eax
// 00850afa  c3                   ret 
// 00850afb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00850aff  8b01                 mov eax, dword ptr [ecx]
// 00850b01  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850b04  6a00                 push 0
// 00850b06  52                   push edx
// 00850b07  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850b0b  6a05                 push 5
// 00850b0d  52                   push edx
// 00850b0e  ffd0                 call eax
// 00850b10  c3                   ret 
// copied from an identical function in another client (function ?PX_Double@@YAHPAVCXTPPropExchange@@PBDAAN@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp