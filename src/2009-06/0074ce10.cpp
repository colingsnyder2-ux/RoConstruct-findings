// roc 2009-06 0074ce10  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ce10
//
// 0074ce10  56                   push esi
// 0074ce11  8bf1                 mov esi, ecx
// 0074ce13  8b4658               mov eax, dword ptr [esi + 0x58]
// 0074ce16  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0074ce19  56                   push esi
// 0074ce1a  e8a1570400           call 0x7925c0
// 0074ce1f  83f8ff               cmp eax, -1
// 0074ce22  7407                 je 0x74ce2b
// 0074ce24  b801000000           mov eax, 1
// 0074ce29  5e                   pop esi
// 0074ce2a  c3                   ret 
// 0074ce2b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074ce2e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0074ce31  56                   push esi
// 0074ce32  e889570400           call 0x7925c0
// 0074ce37  83f8ff               cmp eax, -1
// 0074ce3a  7406                 je 0x74ce42
// 0074ce3c  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0074ce40  75e2                 jne 0x74ce24
// 0074ce42  33c0                 xor eax, eax
// 0074ce44  5e                   pop esi
// 0074ce45  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?HasSortTriangle@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
