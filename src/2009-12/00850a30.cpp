// roc 2009-12 00850a30  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850a30
//
// 00850a30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850a34  85c9                 test ecx, ecx
// 00850a36  7503                 jne 0x850a3b
// 00850a38  33c0                 xor eax, eax
// 00850a3a  c3                   ret 
// 00850a3b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00850a3f  8b01                 mov eax, dword ptr [ecx]
// 00850a41  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850a44  6a00                 push 0
// 00850a46  52                   push edx
// 00850a47  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850a4b  6a0b                 push 0xb
// 00850a4d  52                   push edx
// 00850a4e  ffd0                 call eax
// 00850a50  c3                   ret 
// copied from an identical function in another client (function ?PX_Bool@@YAHPAVCXTPPropExchange@@PBDAAH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp