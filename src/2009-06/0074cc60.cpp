// roc 2009-06 0074cc60  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cc60
//
// 0074cc60  56                   push esi
// 0074cc61  8bf1                 mov esi, ecx
// 0074cc63  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0074cc69  83f8ff               cmp eax, -1
// 0074cc6c  7527                 jne 0x74cc95
// 0074cc6e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074cc71  e81a570400           call 0x792390
// 0074cc76  8bc8                 mov ecx, eax
// 0074cc78  e8e3080000           call 0x74d560
// 0074cc7d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 0074cc84  8bce                 mov ecx, esi
// 0074cc86  7406                 je 0x74cc8e
// 0074cc88  5e                   pop esi
// 0074cc89  e9c2ffffff           jmp 0x74cc50
// 0074cc8e  6a00                 push 0
// 0074cc90  e88bffffff           call 0x74cc20
// 0074cc95  5e                   pop esi
// 0074cc96  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetHeaderAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
