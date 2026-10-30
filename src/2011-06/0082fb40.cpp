// roc 2011-06 0082fb40  unit: CXTPReportView  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fb40
//
// 0082fb40  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0082fb43  e808dd0400           call 0x87d850
// 0082fb48  8bc8                 mov ecx, eax
// 0082fb4a  e8d1c00000           call 0x83bc20
// 0082fb4f  83b83002000000       cmp dword ptr [eax + 0x230], 0
// 0082fb56  8b442404             mov eax, dword ptr [esp + 4]
// 0082fb5a  740d                 je 0x82fb69
// 0082fb5c  a802                 test al, 2
// 0082fb5e  7406                 je 0x82fb66
// 0082fb60  83c0fe               add eax, -2
// 0082fb63  c20400               ret 4
// 0082fb66  83c002               add eax, 2
// 0082fb69  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetNormAlignment@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
