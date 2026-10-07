// roc 2012-06 00a23d20  unit: CXTPFormulaMulDivC  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23d20
//
// 00a23d20  8b442404             mov eax, dword ptr [esp + 4]
// 00a23d24  8b542408             mov edx, dword ptr [esp + 8]
// 00a23d28  894120               mov dword ptr [ecx + 0x20], eax
// 00a23d2b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a23d2f  895124               mov dword ptr [ecx + 0x24], edx
// 00a23d32  894128               mov dword ptr [ecx + 0x28], eax
// 00a23d35  c20c00               ret 0xc
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?SetStandardValue@CXTPFormulaMulDivC@@UAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
