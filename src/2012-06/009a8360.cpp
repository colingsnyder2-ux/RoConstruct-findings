// roc 2012-06 009a8360  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8360
//
// 009a8360  56                   push esi
// 009a8361  8bf1                 mov esi, ecx
// 009a8363  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a8366  85c9                 test ecx, ecx
// 009a8368  741d                 je 0x9a8387
// 009a836a  e891da0400           call 0x9f5e00
// 009a836f  85c0                 test eax, eax
// 009a8371  7414                 je 0x9a8387
// 009a8373  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a8376  e885da0400           call 0x9f5e00
// 009a837b  397038               cmp dword ptr [eax + 0x38], esi
// 009a837e  7507                 jne 0x9a8387
// 009a8380  b801000000           mov eax, 1
// 009a8385  5e                   pop esi
// 009a8386  c3                   ret 
// 009a8387  33c0                 xor eax, eax
// 009a8389  5e                   pop esi
// 009a838a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsDragging@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
