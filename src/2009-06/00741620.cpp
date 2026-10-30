// roc 2009-06 00741620  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00741620
//
// 00741620  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00741626  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0074162a  8b8058020000         mov eax, dword ptr [eax + 0x258]
// 00741630  49                   dec ecx
// 00741631  0fafc1               imul eax, ecx
// 00741634  33d2                 xor edx, edx
// 00741636  85c0                 test eax, eax
// 00741638  0f9cc2               setl dl
// 0074163b  4a                   dec edx
// 0074163c  23c2                 and eax, edx
// 0074163e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetIndent@CXTPReportControl@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
