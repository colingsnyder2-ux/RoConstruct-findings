// roc 2009-06 00749700  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00749700
//
// 00749700  56                   push esi
// 00749701  6a00                 push 0
// 00749703  6acc                 push -0x34
// 00749705  8bf1                 mov esi, ecx
// 00749707  e854edffff           call 0x748460
// 0074970c  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00749712  c7404000000000       mov dword ptr [eax + 0x40], 0
// 00749719  5e                   pop esi
// 0074971a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSelectionChanged@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
