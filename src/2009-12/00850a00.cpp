// roc 2009-12 00850a00  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850a00
//
// 00850a00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850a04  85c9                 test ecx, ecx
// 00850a06  7503                 jne 0x850a0b
// 00850a08  33c0                 xor eax, eax
// 00850a0a  c3                   ret 
// 00850a0b  8b01                 mov eax, dword ptr [ecx]
// 00850a0d  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850a10  8d542410             lea edx, [esp + 0x10]
// 00850a14  52                   push edx
// 00850a15  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850a19  52                   push edx
// 00850a1a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850a1e  6a03                 push 3
// 00850a20  52                   push edx
// 00850a21  ffd0                 call eax
// 00850a23  c3                   ret 
// copied from an identical function in another client (function ?PX_Long@@YAHPAVCXTPPropExchange@@PBDAAJJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp