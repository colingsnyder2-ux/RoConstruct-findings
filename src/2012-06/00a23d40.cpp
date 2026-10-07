// roc 2012-06 00a23d40  unit: CXTPFormulaMulDivC  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23d40
//
// 00a23d40  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a23d43  8b542404             mov edx, dword ptr [esp + 4]
// 00a23d47  8902                 mov dword ptr [edx], eax
// 00a23d49  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a23d4c  8b542408             mov edx, dword ptr [esp + 8]
// 00a23d50  8902                 mov dword ptr [edx], eax
// 00a23d52  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a23d55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a23d59  8901                 mov dword ptr [ecx], eax
// 00a23d5b  c20c00               ret 0xc
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetStandardValue@CXTPFormulaMulDivC@@UAEXAAH00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
