// roc 2012-06 009a8180  unit: CXTPReportView  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8180
//
// 009a8180  56                   push esi
// 009a8181  8bf1                 mov esi, ecx
// 009a8183  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 009a8189  83f8ff               cmp eax, -1
// 009a818c  7527                 jne 0x9a81b5
// 009a818e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a8191  e86adc0400           call 0x9f5e00
// 009a8196  8bc8                 mov ecx, eax
// 009a8198  e893c00000           call 0x9b4230
// 009a819d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 009a81a4  8bce                 mov ecx, esi
// 009a81a6  7406                 je 0x9a81ae
// 009a81a8  5e                   pop esi
// 009a81a9  e9c2ffffff           jmp 0x9a8170
// 009a81ae  6a00                 push 0
// 009a81b0  e88bffffff           call 0x9a8140
// 009a81b5  5e                   pop esi
// 009a81b6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetHeaderAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
