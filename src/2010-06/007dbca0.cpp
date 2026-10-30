// roc 2010-06 007dbca0  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbca0
//
// 007dbca0  56                   push esi
// 007dbca1  8bf1                 mov esi, ecx
// 007dbca3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbca6  85c9                 test ecx, ecx
// 007dbca8  741d                 je 0x7dbcc7
// 007dbcaa  e891440400           call 0x820140
// 007dbcaf  85c0                 test eax, eax
// 007dbcb1  7414                 je 0x7dbcc7
// 007dbcb3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbcb6  e885440400           call 0x820140
// 007dbcbb  397038               cmp dword ptr [eax + 0x38], esi
// 007dbcbe  7507                 jne 0x7dbcc7
// 007dbcc0  b801000000           mov eax, 1
// 007dbcc5  5e                   pop esi
// 007dbcc6  c3                   ret 
// 007dbcc7  33c0                 xor eax, eax
// 007dbcc9  5e                   pop esi
// 007dbcca  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsDragging@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
