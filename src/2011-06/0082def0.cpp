// roc 2011-06 0082def0  unit: CXTPReportViewPrintOptions  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082def0
//
// 0082def0  56                   push esi
// 0082def1  8bf1                 mov esi, ecx
// 0082def3  e858090300           call 0x85e850
// 0082def8  33c0                 xor eax, eax
// 0082defa  894640               mov dword ptr [esi + 0x40], eax
// 0082defd  894644               mov dword ptr [esi + 0x44], eax
// 0082df00  c7061c42ac00         mov dword ptr [esi], 0xac421c
// 0082df06  8bc6                 mov eax, esi
// 0082df08  5e                   pop esi
// 0082df09  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportPageSetupDialog.cpp (function ??0CXTPReportViewPrintOptions@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPageSetupDialog.cpp
