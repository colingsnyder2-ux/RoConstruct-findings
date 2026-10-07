// roc 2008-06 006c95e0  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c95e0
//
// 006c95e0  8bc1                 mov eax, ecx
// 006c95e2  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 006c95e8  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006c95eb  56                   push esi
// 006c95ec  8bb088020000         mov esi, dword ptr [eax + 0x288]
// 006c95f2  e86904ffff           call 0x6b9a60
// 006c95f7  898694000000         mov dword ptr [esi + 0x94], eax
// 006c95fd  5e                   pop esi
// 006c95fe  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AdjustIndentation@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
