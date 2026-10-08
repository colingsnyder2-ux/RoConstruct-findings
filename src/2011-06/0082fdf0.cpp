// roc 2011-06 0082fdf0  unit: CXTPReportColumn  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fdf0
//
// 0082fdf0  56                   push esi
// 0082fdf1  8bf1                 mov esi, ecx
// 0082fdf3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082fdf6  e855da0400           call 0x87d850
// 0082fdfb  8bc8                 mov ecx, eax
// 0082fdfd  e84ebe0000           call 0x83bc50
// 0082fe02  33c9                 xor ecx, ecx
// 0082fe04  3bc6                 cmp eax, esi
// 0082fe06  0f94c1               sete cl
// 0082fe09  5e                   pop esi
// 0082fe0a  8bc1                 mov eax, ecx
// 0082fe0c  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsHotTracking@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
