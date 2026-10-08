// from server: 100% by auto
// roc 2008-06 006d46a0  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d46a0
//
// 006d46a0  56                   push esi
// 006d46a1  8bf1                 mov esi, ecx
// 006d46a3  8b4658               mov eax, dword ptr [esi + 0x58]
// 006d46a6  8b4824               mov ecx, dword ptr [eax + 0x24]
// 006d46a9  56                   push esi
// 006d46aa  e871b40700           call 0x74fb20
// 006d46af  83f8ff               cmp eax, -1
// 006d46b2  7407                 je 0x6d46bb
// 006d46b4  b801000000           mov eax, 1
// 006d46b9  5e                   pop esi
// 006d46ba  c3                   ret 
// 006d46bb  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d46be  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006d46c1  56                   push esi
// 006d46c2  e859b40700           call 0x74fb20
// 006d46c7  83f8ff               cmp eax, -1
// 006d46ca  7406                 je 0x6d46d2
// 006d46cc  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 006d46d0  75e2                 jne 0x6d46b4
// 006d46d2  33c0                 xor eax, eax
// 006d46d4  5e                   pop esi
// 006d46d5  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?HasSortTriangle@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
