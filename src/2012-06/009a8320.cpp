// roc 2012-06 009a8320  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8320
//
// 009a8320  56                   push esi
// 009a8321  8bf1                 mov esi, ecx
// 009a8323  8b4658               mov eax, dword ptr [esi + 0x58]
// 009a8326  8b4824               mov ecx, dword ptr [eax + 0x24]
// 009a8329  56                   push esi
// 009a832a  e801dd0400           call 0x9f6030
// 009a832f  83f8ff               cmp eax, -1
// 009a8332  7407                 je 0x9a833b
// 009a8334  b801000000           mov eax, 1
// 009a8339  5e                   pop esi
// 009a833a  c3                   ret 
// 009a833b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a833e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009a8341  56                   push esi
// 009a8342  e8e9dc0400           call 0x9f6030
// 009a8347  83f8ff               cmp eax, -1
// 009a834a  7406                 je 0x9a8352
// 009a834c  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 009a8350  75e2                 jne 0x9a8334
// 009a8352  33c0                 xor eax, eax
// 009a8354  5e                   pop esi
// 009a8355  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?HasSortTriangle@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
