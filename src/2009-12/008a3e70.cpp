// roc 2009-12 008a3e70  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3e70
//
// 008a3e70  8bc1                 mov eax, ecx
// 008a3e72  8b4824               mov ecx, dword ptr [eax + 0x24]
// 008a3e75  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 008a3e7b  50                   push eax
// 008a3e7c  e8dfabf8ff           call 0x82ea60
// 008a3e81  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsSelected@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
