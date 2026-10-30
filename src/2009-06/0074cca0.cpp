// roc 2009-06 0074cca0  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cca0
//
// 0074cca0  56                   push esi
// 0074cca1  8bf1                 mov esi, ecx
// 0074cca3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0074cca9  83f8ff               cmp eax, -1
// 0074ccac  7527                 jne 0x74ccd5
// 0074ccae  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074ccb1  e8da560400           call 0x792390
// 0074ccb6  8bc8                 mov ecx, eax
// 0074ccb8  e8a3080000           call 0x74d560
// 0074ccbd  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 0074ccc4  8bce                 mov ecx, esi
// 0074ccc6  7406                 je 0x74ccce
// 0074ccc8  5e                   pop esi
// 0074ccc9  e982ffffff           jmp 0x74cc50
// 0074ccce  6a00                 push 0
// 0074ccd0  e84bffffff           call 0x74cc20
// 0074ccd5  5e                   pop esi
// 0074ccd6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
