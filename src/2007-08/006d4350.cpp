// from server: 100% by auto
// roc 2007-08 006d4350  unit: CXTPReportRow_Batch  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4350
//
// 006d4350  51                   push ecx
// 006d4351  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006d4354  e8c738f8ff           call 0x657c20
// 006d4359  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRow.cpp (function ?EnsureVisible@CXTPReportRow@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRow.cpp
