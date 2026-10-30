// roc 2011-06 00830670  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830670
//
// 00830670  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00830676  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083067a  8b8058020000         mov eax, dword ptr [eax + 0x258]
// 00830680  49                   dec ecx
// 00830681  0fafc1               imul eax, ecx
// 00830684  33d2                 xor edx, edx
// 00830686  85c0                 test eax, eax
// 00830688  0f9cc2               setl dl
// 0083068b  4a                   dec edx
// 0083068c  23c2                 and eax, edx
// 0083068e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetIndent@CXTPReportControl@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
