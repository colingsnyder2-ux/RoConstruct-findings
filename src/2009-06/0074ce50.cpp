// roc 2009-06 0074ce50  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ce50
//
// 0074ce50  56                   push esi
// 0074ce51  8bf1                 mov esi, ecx
// 0074ce53  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074ce56  85c9                 test ecx, ecx
// 0074ce58  741d                 je 0x74ce77
// 0074ce5a  e831550400           call 0x792390
// 0074ce5f  85c0                 test eax, eax
// 0074ce61  7414                 je 0x74ce77
// 0074ce63  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074ce66  e825550400           call 0x792390
// 0074ce6b  397038               cmp dword ptr [eax + 0x38], esi
// 0074ce6e  7507                 jne 0x74ce77
// 0074ce70  b801000000           mov eax, 1
// 0074ce75  5e                   pop esi
// 0074ce76  c3                   ret 
// 0074ce77  33c0                 xor eax, eax
// 0074ce79  5e                   pop esi
// 0074ce7a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsDragging@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
