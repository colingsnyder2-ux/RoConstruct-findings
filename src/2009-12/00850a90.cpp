// roc 2009-12 00850a90  unit: CXTPPropExchangeXMLNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850a90
//
// 00850a90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850a94  85c9                 test ecx, ecx
// 00850a96  7503                 jne 0x850a9b
// 00850a98  33c0                 xor eax, eax
// 00850a9a  c3                   ret 
// 00850a9b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00850a9f  8b01                 mov eax, dword ptr [ecx]
// 00850aa1  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850aa4  6a00                 push 0
// 00850aa6  52                   push edx
// 00850aa7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850aab  6a1e                 push 0x1e
// 00850aad  52                   push edx
// 00850aae  ffd0                 call eax
// 00850ab0  c3                   ret 
// copied from an identical function in another client (function ?PX_String@@YAHPAVCXTPPropExchange@@PBDAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp