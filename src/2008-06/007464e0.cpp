// roc 2008-06 007464e0  unit: CXTPFormulaMulDivC  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007464e0
//
// 007464e0  8b442404             mov eax, dword ptr [esp + 4]
// 007464e4  8b542408             mov edx, dword ptr [esp + 8]
// 007464e8  894120               mov dword ptr [ecx + 0x20], eax
// 007464eb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007464ef  895124               mov dword ptr [ecx + 0x24], edx
// 007464f2  894128               mov dword ptr [ecx + 0x28], eax
// 007464f5  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?SetStandardValue@CXTPFormulaMulDivC@@UAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
