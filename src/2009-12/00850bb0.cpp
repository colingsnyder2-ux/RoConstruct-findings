// roc 2009-12 00850bb0  unit: CXTPPropExchangeXMLNode  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850bb0
//
// 00850bb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850bb4  85c9                 test ecx, ecx
// 00850bb6  7503                 jne 0x850bbb
// 00850bb8  33c0                 xor eax, eax
// 00850bba  c3                   ret 
// 00850bbb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850bbf  8b01                 mov eax, dword ptr [ecx]
// 00850bc1  8b4060               mov eax, dword ptr [eax + 0x60]
// 00850bc4  52                   push edx
// 00850bc5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850bc9  52                   push edx
// 00850bca  8b542410             mov edx, dword ptr [esp + 0x10]
// 00850bce  52                   push edx
// 00850bcf  ffd0                 call eax
// 00850bd1  c3                   ret 
// copied from an identical function in another client (function ?PX_RuntimeClass@@YAHPAVCXTPPropExchange@@PBDAAPAUCRuntimeClass@@PAU2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp