// roc 2011-06 0082fbc0  unit: CXTPReportView  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fbc0
//
// 0082fbc0  56                   push esi
// 0082fbc1  8bf1                 mov esi, ecx
// 0082fbc3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0082fbc9  83f8ff               cmp eax, -1
// 0082fbcc  7527                 jne 0x82fbf5
// 0082fbce  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082fbd1  e87adc0400           call 0x87d850
// 0082fbd6  8bc8                 mov ecx, eax
// 0082fbd8  e843c00000           call 0x83bc20
// 0082fbdd  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 0082fbe4  8bce                 mov ecx, esi
// 0082fbe6  7406                 je 0x82fbee
// 0082fbe8  5e                   pop esi
// 0082fbe9  e982ffffff           jmp 0x82fb70
// 0082fbee  6a00                 push 0
// 0082fbf0  e84bffffff           call 0x82fb40
// 0082fbf5  5e                   pop esi
// 0082fbf6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
