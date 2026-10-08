// from server: 100% by auto
// roc 2008-06 006cb090  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb090
//
// 006cb090  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 006cb096  33c9                 xor ecx, ecx
// 006cb098  394834               cmp dword ptr [eax + 0x34], ecx
// 006cb09b  0f95c1               setne cl
// 006cb09e  8bc1                 mov eax, ecx
// 006cb0a0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
