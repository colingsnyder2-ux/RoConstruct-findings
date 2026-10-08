// roc 2010-06 007d8560  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d8560
//
// 007d8560  56                   push esi
// 007d8561  6a00                 push 0
// 007d8563  6acc                 push -0x34
// 007d8565  8bf1                 mov esi, ecx
// 007d8567  e864edffff           call 0x7d72d0
// 007d856c  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 007d8572  c7404000000000       mov dword ptr [eax + 0x40], 0
// 007d8579  5e                   pop esi
// 007d857a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSelectionChanged@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
