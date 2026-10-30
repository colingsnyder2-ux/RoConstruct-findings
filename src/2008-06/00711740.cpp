// from server: 100% by auto
// roc 2008-06 00711740  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711740
//
// 00711740  837c240800           cmp dword ptr [esp + 8], 0
// 00711745  7417                 je 0x71175e
// 00711747  837c240400           cmp dword ptr [esp + 4], 0
// 0071174c  7408                 je 0x711756
// 0071174e  e8cdfeffff           call 0x711620
// 00711753  c20800               ret 8
// 00711756  e855ffffff           call 0x7116b0
// 0071175b  c20800               ret 8
// 0071175e  837c240400           cmp dword ptr [esp + 4], 0
// 00711763  7409                 je 0x71176e
// 00711765  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 0071176b  c20800               ret 8
// 0071176e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00711774  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
