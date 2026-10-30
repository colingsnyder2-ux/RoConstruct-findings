// roc 2009-12 00850ac0  unit: CXTPPropExchangeXMLNode  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850ac0
//
// 00850ac0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850ac4  85c9                 test ecx, ecx
// 00850ac6  7503                 jne 0x850acb
// 00850ac8  33c0                 xor eax, eax
// 00850aca  c3                   ret 
// 00850acb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850acf  8b01                 mov eax, dword ptr [ecx]
// 00850ad1  8b4058               mov eax, dword ptr [eax + 0x58]
// 00850ad4  52                   push edx
// 00850ad5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850ad9  52                   push edx
// 00850ada  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850ade  6a1e                 push 0x1e
// 00850ae0  52                   push edx
// 00850ae1  ffd0                 call eax
// 00850ae3  c3                   ret 
// copied from an identical function in another client (function ?PX_String@@YAHPAVCXTPPropExchange@@PBDAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@1@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp