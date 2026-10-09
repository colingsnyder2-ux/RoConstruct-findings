// roc 2009-12 0081e540  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e540
//
// 0081e540  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 0081e546  33c9                 xor ecx, ecx
// 0081e548  394834               cmp dword ptr [eax + 0x34], ecx
// 0081e54b  0f95c1               setne cl
// 0081e54e  8bc1                 mov eax, ecx
// 0081e550  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
