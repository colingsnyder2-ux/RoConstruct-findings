// roc 2009-06 00743680  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743680
//
// 00743680  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 00743686  33c9                 xor ecx, ecx
// 00743688  394834               cmp dword ptr [eax + 0x34], ecx
// 0074368b  0f95c1               setne cl
// 0074368e  8bc1                 mov eax, ecx
// 00743690  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
