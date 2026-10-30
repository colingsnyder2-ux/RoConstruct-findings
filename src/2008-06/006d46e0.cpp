// from server: 100% by auto
// roc 2008-06 006d46e0  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d46e0
//
// 006d46e0  56                   push esi
// 006d46e1  8bf1                 mov esi, ecx
// 006d46e3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d46e6  85c9                 test ecx, ecx
// 006d46e8  741d                 je 0x6d4707
// 006d46ea  e801b20700           call 0x74f8f0
// 006d46ef  85c0                 test eax, eax
// 006d46f1  7414                 je 0x6d4707
// 006d46f3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d46f6  e8f5b10700           call 0x74f8f0
// 006d46fb  397038               cmp dword ptr [eax + 0x38], esi
// 006d46fe  7507                 jne 0x6d4707
// 006d4700  b801000000           mov eax, 1
// 006d4705  5e                   pop esi
// 006d4706  c3                   ret 
// 006d4707  33c0                 xor eax, eax
// 006d4709  5e                   pop esi
// 006d470a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsDragging@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
