// roc 2010-06 007dbac0  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbac0
//
// 007dbac0  56                   push esi
// 007dbac1  8bf1                 mov esi, ecx
// 007dbac3  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 007dbac9  83f8ff               cmp eax, -1
// 007dbacc  7527                 jne 0x7dbaf5
// 007dbace  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007dbad1  e86a460400           call 0x820140
// 007dbad6  8bc8                 mov ecx, eax
// 007dbad8  e8c3080000           call 0x7dc3a0
// 007dbadd  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 007dbae4  8bce                 mov ecx, esi
// 007dbae6  7406                 je 0x7dbaee
// 007dbae8  5e                   pop esi
// 007dbae9  e9c2ffffff           jmp 0x7dbab0
// 007dbaee  6a00                 push 0
// 007dbaf0  e88bffffff           call 0x7dba80
// 007dbaf5  5e                   pop esi
// 007dbaf6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetHeaderAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
