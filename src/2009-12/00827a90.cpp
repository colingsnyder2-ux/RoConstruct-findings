// roc 2009-12 00827a90  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827a90
//
// 00827a90  56                   push esi
// 00827a91  8bf1                 mov esi, ecx
// 00827a93  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00827a99  83f8ff               cmp eax, -1
// 00827a9c  7527                 jne 0x827ac5
// 00827a9e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827aa1  e80a590400           call 0x86d3b0
// 00827aa6  8bc8                 mov ecx, eax
// 00827aa8  e873080000           call 0x828320
// 00827aad  83b82c02000000       cmp dword ptr [eax + 0x22c], 0
// 00827ab4  8bce                 mov ecx, esi
// 00827ab6  7406                 je 0x827abe
// 00827ab8  5e                   pop esi
// 00827ab9  e982ffffff           jmp 0x827a40
// 00827abe  6a00                 push 0
// 00827ac0  e84bffffff           call 0x827a10
// 00827ac5  5e                   pop esi
// 00827ac6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterAlignment@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
