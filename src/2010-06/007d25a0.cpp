// roc 2010-06 007d25a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d25a0
//
// 007d25a0  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 007d25a6  33c9                 xor ecx, ecx
// 007d25a8  394834               cmp dword ptr [eax + 0x34], ecx
// 007d25ab  0f95c1               setne cl
// 007d25ae  8bc1                 mov eax, ecx
// 007d25b0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
