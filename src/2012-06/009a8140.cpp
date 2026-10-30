// roc 2012-06 009a8140  unit: CXTPReportView  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8140
//
// 009a8140  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 009a8143  e8b8dc0400           call 0x9f5e00
// 009a8148  8bc8                 mov ecx, eax
// 009a814a  e8e1c00000           call 0x9b4230
// 009a814f  83b83002000000       cmp dword ptr [eax + 0x230], 0
// 009a8156  8b442404             mov eax, dword ptr [esp + 4]
// 009a815a  740d                 je 0x9a8169
// 009a815c  a802                 test al, 2
// 009a815e  7406                 je 0x9a8166
// 009a8160  83c0fe               add eax, -2
// 009a8163  c20400               ret 4
// 009a8166  83c002               add eax, 2
// 009a8169  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetNormAlignment@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
