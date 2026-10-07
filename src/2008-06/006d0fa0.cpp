// roc 2008-06 006d0fa0  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0fa0
//
// 006d0fa0  56                   push esi
// 006d0fa1  6a00                 push 0
// 006d0fa3  6acc                 push -0x34
// 006d0fa5  8bf1                 mov esi, ecx
// 006d0fa7  e874edffff           call 0x6cfd20
// 006d0fac  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 006d0fb2  c7404000000000       mov dword ptr [eax + 0x40], 0
// 006d0fb9  5e                   pop esi
// 006d0fba  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSelectionChanged@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
