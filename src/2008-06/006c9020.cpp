// roc 2008-06 006c9020  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9020
//
// 006c9020  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 006c9026  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c902a  8b8058020000         mov eax, dword ptr [eax + 0x258]
// 006c9030  49                   dec ecx
// 006c9031  0fafc1               imul eax, ecx
// 006c9034  33d2                 xor edx, edx
// 006c9036  85c0                 test eax, eax
// 006c9038  0f9cc2               setl dl
// 006c903b  4a                   dec edx
// 006c903c  23c2                 and eax, edx
// 006c903e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetIndent@CXTPReportControl@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
