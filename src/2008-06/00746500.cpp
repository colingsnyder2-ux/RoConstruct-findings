// roc 2008-06 00746500  unit: CXTPFormulaMulDivC  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746500
//
// 00746500  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00746503  8b542404             mov edx, dword ptr [esp + 4]
// 00746507  8902                 mov dword ptr [edx], eax
// 00746509  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0074650c  8b542408             mov edx, dword ptr [esp + 8]
// 00746510  8902                 mov dword ptr [edx], eax
// 00746512  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00746515  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00746519  8901                 mov dword ptr [ecx], eax
// 0074651b  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetStandardValue@CXTPFormulaMulDivC@@UAEXAAH00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
