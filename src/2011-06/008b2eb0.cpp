// roc 2011-06 008b2eb0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2eb0
//
// 008b2eb0  8bc1                 mov eax, ecx
// 008b2eb2  8b4824               mov ecx, dword ptr [eax + 0x24]
// 008b2eb5  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 008b2ebb  50                   push eax
// 008b2ebc  e8af16f9ff           call 0x844570
// 008b2ec1  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsSelected@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
