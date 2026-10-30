// roc 2010-06 007dbb00  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbb00
//
// 007dbb00  56                   push esi
// 007dbb01  8bf1                 mov esi, ecx
// 007dbb03  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007dbb09  83f8ff               cmp eax, -1
// 007dbb0c  7527                 jne 0x7dbb35
// 007dbb0e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbb11  e82a460400           call 0x820140
// 007dbb16  8bc8                 mov ecx, eax
// 007dbb18  e883080000           call 0x7dc3a0
// 007dbb1d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 007dbb24  8bce                 mov ecx, esi
// 007dbb26  7406                 je 0x7dbb2e
// 007dbb28  5e                   pop esi
// 007dbb29  e982ffffff           jmp 0x7dbab0
// 007dbb2e  6a00                 push 0
// 007dbb30  e84bffffff           call 0x7dba80
// 007dbb35  5e                   pop esi
// 007dbb36  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
