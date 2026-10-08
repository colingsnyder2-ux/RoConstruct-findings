// roc 2011-06 0082fd30  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fd30
//
// 0082fd30  56                   push esi
// 0082fd31  8bf1                 mov esi, ecx
// 0082fd33  8b4658               mov eax, dword ptr [esi + 0x58]
// 0082fd36  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0082fd39  56                   push esi
// 0082fd3a  e841dd0400           call 0x87da80
// 0082fd3f  83f8ff               cmp eax, -1
// 0082fd42  7407                 je 0x82fd4b
// 0082fd44  b801000000           mov eax, 1
// 0082fd49  5e                   pop esi
// 0082fd4a  c3                   ret 
// 0082fd4b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082fd4e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0082fd51  56                   push esi
// 0082fd52  e829dd0400           call 0x87da80
// 0082fd57  83f8ff               cmp eax, -1
// 0082fd5a  7406                 je 0x82fd62
// 0082fd5c  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0082fd60  75e2                 jne 0x82fd44
// 0082fd62  33c0                 xor eax, eax
// 0082fd64  5e                   pop esi
// 0082fd65  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?HasSortTriangle@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
