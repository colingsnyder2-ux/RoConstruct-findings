// roc 2011-06 00879720  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879720
//
// 00879720  837c240800           cmp dword ptr [esp + 8], 0
// 00879725  7417                 je 0x87973e
// 00879727  837c240400           cmp dword ptr [esp + 4], 0
// 0087972c  7408                 je 0x879736
// 0087972e  e8cdfeffff           call 0x879600
// 00879733  c20800               ret 8
// 00879736  e855ffffff           call 0x879690
// 0087973b  c20800               ret 8
// 0087973e  837c240400           cmp dword ptr [esp + 4], 0
// 00879743  7409                 je 0x87974e
// 00879745  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 0087974b  c20800               ret 8
// 0087974e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00879754  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
