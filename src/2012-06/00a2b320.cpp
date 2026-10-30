// roc 2012-06 00a2b320  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b320
//
// 00a2b320  8bc1                 mov eax, ecx
// 00a2b322  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00a2b325  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00a2b32b  50                   push eax
// 00a2b32c  e86f16f9ff           call 0x9bc9a0
// 00a2b331  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsSelected@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
