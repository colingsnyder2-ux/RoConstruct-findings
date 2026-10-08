// roc 2012-06 009a81c0  unit: CXTPReportView  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a81c0
//
// 009a81c0  56                   push esi
// 009a81c1  8bf1                 mov esi, ecx
// 009a81c3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009a81c9  83f8ff               cmp eax, -1
// 009a81cc  7527                 jne 0x9a81f5
// 009a81ce  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a81d1  e82adc0400           call 0x9f5e00
// 009a81d6  8bc8                 mov ecx, eax
// 009a81d8  e853c00000           call 0x9b4230
// 009a81dd  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 009a81e4  8bce                 mov ecx, esi
// 009a81e6  7406                 je 0x9a81ee
// 009a81e8  5e                   pop esi
// 009a81e9  e982ffffff           jmp 0x9a8170
// 009a81ee  6a00                 push 0
// 009a81f0  e84bffffff           call 0x9a8140
// 009a81f5  5e                   pop esi
// 009a81f6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
