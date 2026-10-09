// roc 2009-12 00864f40  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864f40
//
// 00864f40  837c240800           cmp dword ptr [esp + 8], 0
// 00864f45  7417                 je 0x864f5e
// 00864f47  837c240400           cmp dword ptr [esp + 4], 0
// 00864f4c  7408                 je 0x864f56
// 00864f4e  e8cdfeffff           call 0x864e20
// 00864f53  c20800               ret 8
// 00864f56  e855ffffff           call 0x864eb0
// 00864f5b  c20800               ret 8
// 00864f5e  837c240400           cmp dword ptr [esp + 4], 0
// 00864f63  7409                 je 0x864f6e
// 00864f65  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00864f6b  c20800               ret 8
// 00864f6e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00864f74  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
