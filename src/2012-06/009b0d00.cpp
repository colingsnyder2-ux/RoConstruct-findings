// roc 2012-06 009b0d00  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0d00
//
// 009b0d00  56                   push esi
// 009b0d01  6a00                 push 0
// 009b0d03  6acc                 push -0x34
// 009b0d05  8bf1                 mov esi, ecx
// 009b0d07  e864edffff           call 0x9afa70
// 009b0d0c  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 009b0d12  c7404000000000       mov dword ptr [eax + 0x40], 0
// 009b0d19  5e                   pop esi
// 009b0d1a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSelectionChanged@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
