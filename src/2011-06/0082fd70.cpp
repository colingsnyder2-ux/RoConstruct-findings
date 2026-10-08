// roc 2011-06 0082fd70  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fd70
//
// 0082fd70  56                   push esi
// 0082fd71  8bf1                 mov esi, ecx
// 0082fd73  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082fd76  85c9                 test ecx, ecx
// 0082fd78  741d                 je 0x82fd97
// 0082fd7a  e8d1da0400           call 0x87d850
// 0082fd7f  85c0                 test eax, eax
// 0082fd81  7414                 je 0x82fd97
// 0082fd83  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082fd86  e8c5da0400           call 0x87d850
// 0082fd8b  397038               cmp dword ptr [eax + 0x38], esi
// 0082fd8e  7507                 jne 0x82fd97
// 0082fd90  b801000000           mov eax, 1
// 0082fd95  5e                   pop esi
// 0082fd96  c3                   ret 
// 0082fd97  33c0                 xor eax, eax
// 0082fd99  5e                   pop esi
// 0082fd9a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsDragging@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
