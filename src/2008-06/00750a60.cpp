// from server: 100% by auto
// roc 2008-06 00750a60  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750a60
//
// 00750a60  8bc1                 mov eax, ecx
// 00750a62  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00750a65  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00750a6b  50                   push eax
// 00750a6c  e8bfa9f8ff           call 0x6db430
// 00750a71  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsSelected@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
