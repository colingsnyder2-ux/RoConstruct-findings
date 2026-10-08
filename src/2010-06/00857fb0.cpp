// roc 2010-06 00857fb0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857fb0
//
// 00857fb0  8bc1                 mov eax, ecx
// 00857fb2  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00857fb5  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00857fbb  50                   push eax
// 00857fbc  e84facf8ff           call 0x7e2c10
// 00857fc1  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsSelected@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
