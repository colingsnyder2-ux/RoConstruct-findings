// roc 2012-06 009a9220  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a9220
//
// 009a9220  8bc1                 mov eax, ecx
// 009a9222  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 009a9228  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009a922b  56                   push esi
// 009a922c  8bb088020000         mov esi, dword ptr [eax + 0x288]
// 009a9232  e8e9e7feff           call 0x997a20
// 009a9237  898694000000         mov dword ptr [esi + 0x94], eax
// 009a923d  5e                   pop esi
// 009a923e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AdjustIndentation@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
