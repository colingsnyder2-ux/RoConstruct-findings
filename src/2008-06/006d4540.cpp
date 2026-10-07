// roc 2008-06 006d4540  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4540
//
// 006d4540  56                   push esi
// 006d4541  8bf1                 mov esi, ecx
// 006d4543  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006d4549  83f8ff               cmp eax, -1
// 006d454c  7527                 jne 0x6d4575
// 006d454e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d4551  e89ab30700           call 0x74f8f0
// 006d4556  8bc8                 mov ecx, eax
// 006d4558  e893080000           call 0x6d4df0
// 006d455d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 006d4564  8bce                 mov ecx, esi
// 006d4566  7406                 je 0x6d456e
// 006d4568  5e                   pop esi
// 006d4569  e982ffffff           jmp 0x6d44f0
// 006d456e  6a00                 push 0
// 006d4570  e84bffffff           call 0x6d44c0
// 006d4575  5e                   pop esi
// 006d4576  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
