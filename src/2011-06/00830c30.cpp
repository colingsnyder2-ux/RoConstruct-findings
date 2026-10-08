// roc 2011-06 00830c30  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830c30
//
// 00830c30  8bc1                 mov eax, ecx
// 00830c32  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00830c38  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00830c3b  56                   push esi
// 00830c3c  8bb088020000         mov esi, dword ptr [eax + 0x288]
// 00830c42  e889350700           call 0x8a41d0
// 00830c47  898694000000         mov dword ptr [esi + 0x94], eax
// 00830c4d  5e                   pop esi
// 00830c4e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AdjustIndentation@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
