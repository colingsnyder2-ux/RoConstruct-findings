// roc 2009-06 0074cc20  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cc20
//
// 0074cc20  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0074cc23  e868570400           call 0x792390
// 0074cc28  8bc8                 mov ecx, eax
// 0074cc2a  e831090000           call 0x74d560
// 0074cc2f  83b83002000000       cmp dword ptr [eax + 0x230], 0
// 0074cc36  8b442404             mov eax, dword ptr [esp + 4]
// 0074cc3a  740d                 je 0x74cc49
// 0074cc3c  a802                 test al, 2
// 0074cc3e  7406                 je 0x74cc46
// 0074cc40  83c0fe               add eax, -2
// 0074cc43  c20400               ret 4
// 0074cc46  83c002               add eax, 2
// 0074cc49  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetNormAlignment@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
