// from server: 100% by auto
// roc 2008-06 006d44c0  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d44c0
//
// 006d44c0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 006d44c3  e828b40700           call 0x74f8f0
// 006d44c8  8bc8                 mov ecx, eax
// 006d44ca  e821090000           call 0x6d4df0
// 006d44cf  83b83002000000       cmp dword ptr [eax + 0x230], 0
// 006d44d6  8b442404             mov eax, dword ptr [esp + 4]
// 006d44da  740d                 je 0x6d44e9
// 006d44dc  a802                 test al, 2
// 006d44de  7406                 je 0x6d44e6
// 006d44e0  83c0fe               add eax, -2
// 006d44e3  c20400               ret 4
// 006d44e6  83c002               add eax, 2
// 006d44e9  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetNormAlignment@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
