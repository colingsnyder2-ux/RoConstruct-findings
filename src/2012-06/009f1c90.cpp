// roc 2012-06 009f1c90  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1c90
//
// 009f1c90  837c240800           cmp dword ptr [esp + 8], 0
// 009f1c95  7417                 je 0x9f1cae
// 009f1c97  837c240400           cmp dword ptr [esp + 4], 0
// 009f1c9c  7408                 je 0x9f1ca6
// 009f1c9e  e8cdfeffff           call 0x9f1b70
// 009f1ca3  c20800               ret 8
// 009f1ca6  e855ffffff           call 0x9f1c00
// 009f1cab  c20800               ret 8
// 009f1cae  837c240400           cmp dword ptr [esp + 4], 0
// 009f1cb3  7409                 je 0x9f1cbe
// 009f1cb5  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 009f1cbb  c20800               ret 8
// 009f1cbe  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 009f1cc4  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
