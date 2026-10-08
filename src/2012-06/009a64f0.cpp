// from server: 100% by auto
// roc 2012-06 009a64f0  unit: CXTPReportViewPrintOptions  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a64f0
//
// 009a64f0  56                   push esi
// 009a64f1  8bf1                 mov esi, ecx
// 009a64f3  e868070300           call 0x9d6c60
// 009a64f8  33c0                 xor eax, eax
// 009a64fa  894640               mov dword ptr [esi + 0x40], eax
// 009a64fd  894644               mov dword ptr [esi + 0x44], eax
// 009a6500  c706fcf8c000         mov dword ptr [esi], 0xc0f8fc
// 009a6506  8bc6                 mov eax, esi
// 009a6508  5e                   pop esi
// 009a6509  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportPageSetupDialog.cpp (function ??0CXTPReportViewPrintOptions@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPageSetupDialog.cpp
