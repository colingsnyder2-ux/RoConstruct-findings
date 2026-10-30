// roc 2009-12 0081c4d0  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c4d0
//
// 0081c4d0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0081c4d6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081c4da  8b8058020000         mov eax, dword ptr [eax + 0x258]
// 0081c4e0  49                   dec ecx
// 0081c4e1  0fafc1               imul eax, ecx
// 0081c4e4  33d2                 xor edx, edx
// 0081c4e6  85c0                 test eax, eax
// 0081c4e8  0f9cc2               setl dl
// 0081c4eb  4a                   dec edx
// 0081c4ec  23c2                 and eax, edx
// 0081c4ee  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetIndent@CXTPReportControl@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
