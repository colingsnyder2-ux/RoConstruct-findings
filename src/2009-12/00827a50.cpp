// roc 2009-12 00827a50  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827a50
//
// 00827a50  56                   push esi
// 00827a51  8bf1                 mov esi, ecx
// 00827a53  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00827a59  83f8ff               cmp eax, -1
// 00827a5c  7527                 jne 0x827a85
// 00827a5e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827a61  e84a590400           call 0x86d3b0
// 00827a66  8bc8                 mov ecx, eax
// 00827a68  e8b3080000           call 0x828320
// 00827a6d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 00827a74  8bce                 mov ecx, esi
// 00827a76  7406                 je 0x827a7e
// 00827a78  5e                   pop esi
// 00827a79  e9c2ffffff           jmp 0x827a40
// 00827a7e  6a00                 push 0
// 00827a80  e88bffffff           call 0x827a10
// 00827a85  5e                   pop esi
// 00827a86  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetHeaderAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
