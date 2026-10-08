// roc 2009-06 007c9070  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9070
//
// 007c9070  8bc1                 mov eax, ecx
// 007c9072  8b4824               mov ecx, dword ptr [eax + 0x24]
// 007c9075  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 007c907b  50                   push eax
// 007c907c  e8dfabf8ff           call 0x753c60
// 007c9081  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsSelected@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
