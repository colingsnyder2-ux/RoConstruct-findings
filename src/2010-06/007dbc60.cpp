// roc 2010-06 007dbc60  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbc60
//
// 007dbc60  56                   push esi
// 007dbc61  8bf1                 mov esi, ecx
// 007dbc63  8b4658               mov eax, dword ptr [esi + 0x58]
// 007dbc66  8b4824               mov ecx, dword ptr [eax + 0x24]
// 007dbc69  56                   push esi
// 007dbc6a  e801470400           call 0x820370
// 007dbc6f  83f8ff               cmp eax, -1
// 007dbc72  7407                 je 0x7dbc7b
// 007dbc74  b801000000           mov eax, 1
// 007dbc79  5e                   pop esi
// 007dbc7a  c3                   ret 
// 007dbc7b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbc7e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007dbc81  56                   push esi
// 007dbc82  e8e9460400           call 0x820370
// 007dbc87  83f8ff               cmp eax, -1
// 007dbc8a  7406                 je 0x7dbc92
// 007dbc8c  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 007dbc90  75e2                 jne 0x7dbc74
// 007dbc92  33c0                 xor eax, eax
// 007dbc94  5e                   pop esi
// 007dbc95  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?HasSortTriangle@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
