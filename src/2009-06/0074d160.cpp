// roc 2009-06 0074d160  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d160
//
// 0074d160  56                   push esi
// 0074d161  8bf1                 mov esi, ecx
// 0074d163  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074d166  e825520400           call 0x792390
// 0074d16b  85c0                 test eax, eax
// 0074d16d  741d                 je 0x74d18c
// 0074d16f  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074d172  6a00                 push 0
// 0074d174  e867530400           call 0x7924e0
// 0074d179  3bc6                 cmp eax, esi
// 0074d17b  750f                 jne 0x74d18c
// 0074d17d  8bce                 mov ecx, esi
// 0074d17f  e84cfdffff           call 0x74ced0
// 0074d184  8bc8                 mov ecx, eax
// 0074d186  5e                   pop esi
// 0074d187  e98464ffff           jmp 0x743610
// 0074d18c  33c0                 xor eax, eax
// 0074d18e  5e                   pop esi
// 0074d18f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndent@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
