// roc 2009-12 00827f20  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827f20
//
// 00827f20  56                   push esi
// 00827f21  8bf1                 mov esi, ecx
// 00827f23  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827f26  e885540400           call 0x86d3b0
// 00827f2b  85c0                 test eax, eax
// 00827f2d  741d                 je 0x827f4c
// 00827f2f  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827f32  6a00                 push 0
// 00827f34  e8c7550400           call 0x86d500
// 00827f39  3bc6                 cmp eax, esi
// 00827f3b  750f                 jne 0x827f4c
// 00827f3d  8bce                 mov ecx, esi
// 00827f3f  e84cfdffff           call 0x827c90
// 00827f44  8bc8                 mov ecx, eax
// 00827f46  5e                   pop esi
// 00827f47  e97465ffff           jmp 0x81e4c0
// 00827f4c  33c0                 xor eax, eax
// 00827f4e  5e                   pop esi
// 00827f4f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndent@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
