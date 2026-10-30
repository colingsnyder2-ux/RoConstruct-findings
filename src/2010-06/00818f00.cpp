// roc 2010-06 00818f00  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818f00
//
// 00818f00  837c240800           cmp dword ptr [esp + 8], 0
// 00818f05  7417                 je 0x818f1e
// 00818f07  837c240400           cmp dword ptr [esp + 4], 0
// 00818f0c  7408                 je 0x818f16
// 00818f0e  e8cdfeffff           call 0x818de0
// 00818f13  c20800               ret 8
// 00818f16  e855ffffff           call 0x818e70
// 00818f1b  c20800               ret 8
// 00818f1e  837c240400           cmp dword ptr [esp + 4], 0
// 00818f23  7409                 je 0x818f2e
// 00818f25  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00818f2b  c20800               ret 8
// 00818f2e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00818f34  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
