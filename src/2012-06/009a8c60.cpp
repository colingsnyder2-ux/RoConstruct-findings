// roc 2012-06 009a8c60  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8c60
//
// 009a8c60  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 009a8c66  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009a8c6a  8b8058020000         mov eax, dword ptr [eax + 0x258]
// 009a8c70  49                   dec ecx
// 009a8c71  0fafc1               imul eax, ecx
// 009a8c74  33d2                 xor edx, edx
// 009a8c76  85c0                 test eax, eax
// 009a8c78  0f9cc2               setl dl
// 009a8c7b  4a                   dec edx
// 009a8c7c  23c2                 and eax, edx
// 009a8c7e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetIndent@CXTPReportControl@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
