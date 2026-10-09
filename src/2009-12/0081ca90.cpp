// roc 2009-12 0081ca90  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081ca90
//
// 0081ca90  8bc1                 mov eax, ecx
// 0081ca92  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0081ca98  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0081ca9b  56                   push esi
// 0081ca9c  8bb088020000         mov esi, dword ptr [eax + 0x288]
// 0081caa2  e8c98dcbff           call 0x4d5870
// 0081caa7  898694000000         mov dword ptr [esi + 0x94], eax
// 0081caad  5e                   pop esi
// 0081caae  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AdjustIndentation@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
