// roc 2009-12 00827a10  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827a10
//
// 00827a10  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00827a13  e898590400           call 0x86d3b0
// 00827a18  8bc8                 mov ecx, eax
// 00827a1a  e801090000           call 0x828320
// 00827a1f  83b83002000000       cmp dword ptr [eax + 0x230], 0
// 00827a26  8b442404             mov eax, dword ptr [esp + 4]
// 00827a2a  740d                 je 0x827a39
// 00827a2c  a802                 test al, 2
// 00827a2e  7406                 je 0x827a36
// 00827a30  83c0fe               add eax, -2
// 00827a33  c20400               ret 4
// 00827a36  83c002               add eax, 2
// 00827a39  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetNormAlignment@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
