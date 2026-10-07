// roc 2010-06 006760b0  unit: RBX::VHumanoid::?$EventDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006760b0
//
// 006760b0  51                   push ecx
// 006760b1  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 006760b4  e8779f0d00           call 0x750030
// 006760b9  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRow.cpp (function ?EnsureVisible@CXTPReportRow@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRow.cpp
