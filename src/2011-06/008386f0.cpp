// roc 2011-06 008386f0  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008386f0
//
// 008386f0  56                   push esi
// 008386f1  6a00                 push 0
// 008386f3  6acc                 push -0x34
// 008386f5  8bf1                 mov esi, ecx
// 008386f7  e864edffff           call 0x837460
// 008386fc  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00838702  c7404000000000       mov dword ptr [eax + 0x40], 0
// 00838709  5e                   pop esi
// 0083870a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSelectionChanged@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
