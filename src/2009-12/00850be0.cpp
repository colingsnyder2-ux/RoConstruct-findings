// roc 2009-12 00850be0  unit: CXTPPropExchangeXMLNode  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850be0
//
// 00850be0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850be4  85c9                 test ecx, ecx
// 00850be6  7503                 jne 0x850beb
// 00850be8  33c0                 xor eax, eax
// 00850bea  c3                   ret 
// 00850beb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850bef  8b01                 mov eax, dword ptr [ecx]
// 00850bf1  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00850bf4  52                   push edx
// 00850bf5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850bf9  52                   push edx
// 00850bfa  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850bfe  52                   push edx
// 00850bff  ffd0                 call eax
// 00850c01  c3                   ret 
// copied from an identical function in another client (function ?PX_Blob@@YAHPAVCXTPPropExchange@@PBDAAPAEAAK@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp