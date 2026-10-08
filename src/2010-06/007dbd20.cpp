// roc 2010-06 007dbd20  unit: CXTPReportColumn  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbd20
//
// 007dbd20  56                   push esi
// 007dbd21  8bf1                 mov esi, ecx
// 007dbd23  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbd26  e815440400           call 0x820140
// 007dbd2b  8bc8                 mov ecx, eax
// 007dbd2d  e89e060000           call 0x7dc3d0
// 007dbd32  33c9                 xor ecx, ecx
// 007dbd34  3bc6                 cmp eax, esi
// 007dbd36  0f94c1               sete cl
// 007dbd39  5e                   pop esi
// 007dbd3a  8bc1                 mov eax, ecx
// 007dbd3c  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsHotTracking@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
