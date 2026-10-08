// roc 2009-06 0074cee0  unit: CXTPPropertyGridItemConstraint  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cee0
//
// 0074cee0  56                   push esi
// 0074cee1  8bf1                 mov esi, ecx
// 0074cee3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074cee6  e8a5540400           call 0x792390
// 0074ceeb  8bc8                 mov ecx, eax
// 0074ceed  e89e060000           call 0x74d590
// 0074cef2  33c9                 xor ecx, ecx
// 0074cef4  3bc6                 cmp eax, esi
// 0074cef6  0f94c1               sete cl
// 0074cef9  5e                   pop esi
// 0074cefa  8bc1                 mov eax, ecx
// 0074cefc  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsHotTracking@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
