// roc 2010-06 007dba80  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dba80
//
// 007dba80  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 007dba83  e8b8460400           call 0x820140
// 007dba88  8bc8                 mov ecx, eax
// 007dba8a  e811090000           call 0x7dc3a0
// 007dba8f  83b83002000000       cmp dword ptr [eax + 0x230], 0
// 007dba96  8b442404             mov eax, dword ptr [esp + 4]
// 007dba9a  740d                 je 0x7dbaa9
// 007dba9c  a802                 test al, 2
// 007dba9e  7406                 je 0x7dbaa6
// 007dbaa0  83c0fe               add eax, -2
// 007dbaa3  c20400               ret 4
// 007dbaa6  83c002               add eax, 2
// 007dbaa9  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetNormAlignment@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
