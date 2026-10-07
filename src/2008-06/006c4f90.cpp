// roc 2008-06 006c4f90  unit: CXTPReportViewPrintOptions  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4f90
//
// 006c4f90  56                   push esi
// 006c4f91  8bf1                 mov esi, ecx
// 006c4f93  e828470300           call 0x6f96c0
// 006c4f98  33c0                 xor eax, eax
// 006c4f9a  894640               mov dword ptr [esi + 0x40], eax
// 006c4f9d  894644               mov dword ptr [esi + 0x44], eax
// 006c4fa0  c706d42d8500         mov dword ptr [esi], 0x852dd4
// 006c4fa6  8bc6                 mov eax, esi
// 006c4fa8  5e                   pop esi
// 006c4fa9  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ??0CXTPReportViewPrintOptions@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
