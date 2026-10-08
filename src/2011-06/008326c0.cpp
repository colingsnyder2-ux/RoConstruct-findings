// roc 2011-06 008326c0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008326c0
//
// 008326c0  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 008326c6  33c9                 xor ecx, ecx
// 008326c8  394834               cmp dword ptr [eax + 0x34], ecx
// 008326cb  0f95c1               setne cl
// 008326ce  8bc1                 mov eax, ecx
// 008326d0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
