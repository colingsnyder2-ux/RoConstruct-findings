// roc 2009-06 00741be0  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00741be0
//
// 00741be0  8bc1                 mov eax, ecx
// 00741be2  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00741be8  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00741beb  56                   push esi
// 00741bec  8bb088020000         mov esi, dword ptr [eax + 0x288]
// 00741bf2  e8b9b20000           call 0x74ceb0
// 00741bf7  898694000000         mov dword ptr [esi + 0x94], eax
// 00741bfd  5e                   pop esi
// 00741bfe  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AdjustIndentation@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
