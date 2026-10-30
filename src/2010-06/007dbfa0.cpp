// roc 2010-06 007dbfa0  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbfa0
//
// 007dbfa0  56                   push esi
// 007dbfa1  8bf1                 mov esi, ecx
// 007dbfa3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbfa6  e895410400           call 0x820140
// 007dbfab  85c0                 test eax, eax
// 007dbfad  741d                 je 0x7dbfcc
// 007dbfaf  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbfb2  6a00                 push 0
// 007dbfb4  e8d7420400           call 0x820290
// 007dbfb9  3bc6                 cmp eax, esi
// 007dbfbb  750f                 jne 0x7dbfcc
// 007dbfbd  8bce                 mov ecx, esi
// 007dbfbf  e84cfdffff           call 0x7dbd10
// 007dbfc4  8bc8                 mov ecx, eax
// 007dbfc6  5e                   pop esi
// 007dbfc7  e95465ffff           jmp 0x7d2520
// 007dbfcc  33c0                 xor eax, eax
// 007dbfce  5e                   pop esi
// 007dbfcf  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndent@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
