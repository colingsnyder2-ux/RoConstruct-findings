// roc 2008-06 006d4500  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4500
//
// 006d4500  56                   push esi
// 006d4501  8bf1                 mov esi, ecx
// 006d4503  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 006d4509  83f8ff               cmp eax, -1
// 006d450c  7527                 jne 0x6d4535
// 006d450e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d4511  e8dab30700           call 0x74f8f0
// 006d4516  8bc8                 mov ecx, eax
// 006d4518  e8d3080000           call 0x6d4df0
// 006d451d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 006d4524  8bce                 mov ecx, esi
// 006d4526  7406                 je 0x6d452e
// 006d4528  5e                   pop esi
// 006d4529  e9c2ffffff           jmp 0x6d44f0
// 006d452e  6a00                 push 0
// 006d4530  e88bffffff           call 0x6d44c0
// 006d4535  5e                   pop esi
// 006d4536  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetHeaderAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
