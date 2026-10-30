// roc 2009-12 008509a0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008509a0
//
// 008509a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008509a4  85c9                 test ecx, ecx
// 008509a6  7503                 jne 0x8509ab
// 008509a8  33c0                 xor eax, eax
// 008509aa  c3                   ret 
// 008509ab  8b01                 mov eax, dword ptr [ecx]
// 008509ad  8b4058               mov eax, dword ptr [eax + 0x58]
// 008509b0  8d542410             lea edx, [esp + 0x10]
// 008509b4  52                   push edx
// 008509b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 008509b9  52                   push edx
// 008509ba  8b542410             mov edx, dword ptr [esp + 0x10]
// 008509be  6a02                 push 2
// 008509c0  52                   push edx
// 008509c1  ffd0                 call eax
// 008509c3  c3                   ret 
// copied from an identical function in another client (function ?PX_Short@@YAHPAVCXTPPropExchange@@PBDAAFF@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp