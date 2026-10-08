// roc 2009-06 00789f30  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789f30
//
// 00789f30  837c240800           cmp dword ptr [esp + 8], 0
// 00789f35  7417                 je 0x789f4e
// 00789f37  837c240400           cmp dword ptr [esp + 4], 0
// 00789f3c  7408                 je 0x789f46
// 00789f3e  e8cdfeffff           call 0x789e10
// 00789f43  c20800               ret 8
// 00789f46  e855ffffff           call 0x789ea0
// 00789f4b  c20800               ret 8
// 00789f4e  837c240400           cmp dword ptr [esp + 4], 0
// 00789f53  7409                 je 0x789f5e
// 00789f55  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00789f5b  c20800               ret 8
// 00789f5e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00789f64  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
