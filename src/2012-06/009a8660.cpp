// roc 2012-06 009a8660  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8660
//
// 009a8660  56                   push esi
// 009a8661  8bf1                 mov esi, ecx
// 009a8663  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a8666  e895d70400           call 0x9f5e00
// 009a866b  85c0                 test eax, eax
// 009a866d  741d                 je 0x9a868c
// 009a866f  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a8672  6a00                 push 0
// 009a8674  e8d7d80400           call 0x9f5f50
// 009a8679  3bc6                 cmp eax, esi
// 009a867b  750f                 jne 0x9a868c
// 009a867d  8bce                 mov ecx, esi
// 009a867f  e84cfdffff           call 0x9a83d0
// 009a8684  8bc8                 mov ecx, eax
// 009a8686  5e                   pop esi
// 009a8687  e9b4250000           jmp 0x9aac40
// 009a868c  33c0                 xor eax, eax
// 009a868e  5e                   pop esi
// 009a868f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndent@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
