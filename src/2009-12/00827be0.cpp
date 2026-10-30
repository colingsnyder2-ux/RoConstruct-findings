// roc 2009-12 00827be0  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827be0
//
// 00827be0  56                   push esi
// 00827be1  8bf1                 mov esi, ecx
// 00827be3  8b4658               mov eax, dword ptr [esi + 0x58]
// 00827be6  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00827be9  56                   push esi
// 00827bea  e8f1590400           call 0x86d5e0
// 00827bef  83f8ff               cmp eax, -1
// 00827bf2  7407                 je 0x827bfb
// 00827bf4  b801000000           mov eax, 1
// 00827bf9  5e                   pop esi
// 00827bfa  c3                   ret 
// 00827bfb  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827bfe  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00827c01  56                   push esi
// 00827c02  e8d9590400           call 0x86d5e0
// 00827c07  83f8ff               cmp eax, -1
// 00827c0a  7406                 je 0x827c12
// 00827c0c  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00827c10  75e2                 jne 0x827bf4
// 00827c12  33c0                 xor eax, eax
// 00827c14  5e                   pop esi
// 00827c15  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?HasSortTriangle@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
