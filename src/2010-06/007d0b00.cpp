// roc 2010-06 007d0b00  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0b00
//
// 007d0b00  8bc1                 mov eax, ecx
// 007d0b02  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 007d0b08  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007d0b0b  56                   push esi
// 007d0b0c  8bb088020000         mov esi, dword ptr [eax + 0x288]
// 007d0b12  e83980feff           call 0x7b8b50
// 007d0b17  898694000000         mov dword ptr [esi + 0x94], eax
// 007d0b1d  5e                   pop esi
// 007d0b1e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AdjustIndentation@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
