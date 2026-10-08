// roc 2011-06 00830070  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830070
//
// 00830070  56                   push esi
// 00830071  8bf1                 mov esi, ecx
// 00830073  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00830076  e8d5d70400           call 0x87d850
// 0083007b  85c0                 test eax, eax
// 0083007d  741d                 je 0x83009c
// 0083007f  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00830082  6a00                 push 0
// 00830084  e817d90400           call 0x87d9a0
// 00830089  3bc6                 cmp eax, esi
// 0083008b  750f                 jne 0x83009c
// 0083008d  8bce                 mov ecx, esi
// 0083008f  e84cfdffff           call 0x82fde0
// 00830094  8bc8                 mov ecx, eax
// 00830096  5e                   pop esi
// 00830097  e9b4250000           jmp 0x832650
// 0083009c  33c0                 xor eax, eax
// 0083009e  5e                   pop esi
// 0083009f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndent@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
