// roc 2011-06 0082fb80  unit: CXTPReportView  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fb80
//
// 0082fb80  56                   push esi
// 0082fb81  8bf1                 mov esi, ecx
// 0082fb83  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0082fb89  83f8ff               cmp eax, -1
// 0082fb8c  7527                 jne 0x82fbb5
// 0082fb8e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082fb91  e8badc0400           call 0x87d850
// 0082fb96  8bc8                 mov ecx, eax
// 0082fb98  e883c00000           call 0x83bc20
// 0082fb9d  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 0082fba4  8bce                 mov ecx, esi
// 0082fba6  7406                 je 0x82fbae
// 0082fba8  5e                   pop esi
// 0082fba9  e9c2ffffff           jmp 0x82fb70
// 0082fbae  6a00                 push 0
// 0082fbb0  e88bffffff           call 0x82fb40
// 0082fbb5  5e                   pop esi
// 0082fbb6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetHeaderAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
