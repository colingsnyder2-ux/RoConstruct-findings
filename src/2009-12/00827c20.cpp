// roc 2009-12 00827c20  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827c20
//
// 00827c20  56                   push esi
// 00827c21  8bf1                 mov esi, ecx
// 00827c23  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827c26  85c9                 test ecx, ecx
// 00827c28  741d                 je 0x827c47
// 00827c2a  e881570400           call 0x86d3b0
// 00827c2f  85c0                 test eax, eax
// 00827c31  7414                 je 0x827c47
// 00827c33  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827c36  e875570400           call 0x86d3b0
// 00827c3b  397038               cmp dword ptr [eax + 0x38], esi
// 00827c3e  7507                 jne 0x827c47
// 00827c40  b801000000           mov eax, 1
// 00827c45  5e                   pop esi
// 00827c46  c3                   ret 
// 00827c47  33c0                 xor eax, eax
// 00827c49  5e                   pop esi
// 00827c4a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsDragging@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
