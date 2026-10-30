// roc 2009-12 008244f0  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008244f0
//
// 008244f0  56                   push esi
// 008244f1  6a00                 push 0
// 008244f3  6acc                 push -0x34
// 008244f5  8bf1                 mov esi, ecx
// 008244f7  e874edffff           call 0x823270
// 008244fc  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00824502  c7404000000000       mov dword ptr [eax + 0x40], 0
// 00824509  5e                   pop esi
// 0082450a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSelectionChanged@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
