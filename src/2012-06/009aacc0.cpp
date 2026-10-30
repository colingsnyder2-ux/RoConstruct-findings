// roc 2012-06 009aacc0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aacc0
//
// 009aacc0  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 009aacc6  33c9                 xor ecx, ecx
// 009aacc8  394834               cmp dword ptr [eax + 0x34], ecx
// 009aaccb  0f95c1               setne cl
// 009aacce  8bc1                 mov eax, ecx
// 009aacd0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
