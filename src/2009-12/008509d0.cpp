// roc 2009-12 008509d0  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008509d0
//
// 008509d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008509d4  85c9                 test ecx, ecx
// 008509d6  7503                 jne 0x8509db
// 008509d8  33c0                 xor eax, eax
// 008509da  c3                   ret 
// 008509db  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008509df  8b01                 mov eax, dword ptr [ecx]
// 008509e1  8b4058               mov eax, dword ptr [eax + 0x58]
// 008509e4  6a00                 push 0
// 008509e6  52                   push edx
// 008509e7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008509eb  6a03                 push 3
// 008509ed  52                   push edx
// 008509ee  ffd0                 call eax
// 008509f0  c3                   ret 
// copied from an identical function in another client (function ?PX_Long@@YAHPAVCXTPPropExchange@@PBDAAJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp