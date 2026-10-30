// roc 2010-06 007d0540  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0540
//
// 007d0540  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007d0546  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007d054a  8b8058020000         mov eax, dword ptr [eax + 0x258]
// 007d0550  49                   dec ecx
// 007d0551  0fafc1               imul eax, ecx
// 007d0554  33d2                 xor edx, edx
// 007d0556  85c0                 test eax, eax
// 007d0558  0f9cc2               setl dl
// 007d055b  4a                   dec edx
// 007d055c  23c2                 and eax, edx
// 007d055e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?GetIndent@CXTPReportControl@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
