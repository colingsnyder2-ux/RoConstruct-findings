// roc 2009-12 00850a60  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850a60
//
// 00850a60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850a64  85c9                 test ecx, ecx
// 00850a66  7503                 jne 0x850a6b
// 00850a68  33c0                 xor eax, eax
// 00850a6a  c3                   ret 
// 00850a6b  8b01                 mov eax, dword ptr [ecx]
// 00850a6d  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850a70  8d542410             lea edx, [esp + 0x10]
// 00850a74  52                   push edx
// 00850a75  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850a79  52                   push edx
// 00850a7a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850a7e  6a0b                 push 0xb
// 00850a80  52                   push edx
// 00850a81  ffd0                 call eax
// 00850a83  c3                   ret 
// copied from an identical function in another client (function ?PX_Bool@@YAHPAVCXTPPropExchange@@PBDAAHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp