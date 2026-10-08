// roc 2010-06 007dbd40  unit: CXTPReportColumn  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbd40
//
// 007dbd40  56                   push esi
// 007dbd41  8bf1                 mov esi, ecx
// 007dbd43  e8c8ffffff           call 0x7dbd10
// 007dbd48  56                   push esi
// 007dbd49  8bc8                 mov ecx, eax
// 007dbd4b  e83080ffff           call 0x7d3d80
// 007dbd50  5e                   pop esi
// 007dbd51  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?EnsureVisible@CXTPReportColumn@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
