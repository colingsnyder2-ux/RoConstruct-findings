// from server: 100% by auto
// roc 2008-06 006d49f0  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d49f0
//
// 006d49f0  56                   push esi
// 006d49f1  8bf1                 mov esi, ecx
// 006d49f3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d49f6  e8f5ae0700           call 0x74f8f0
// 006d49fb  85c0                 test eax, eax
// 006d49fd  741d                 je 0x6d4a1c
// 006d49ff  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d4a02  6a00                 push 0
// 006d4a04  e837b00700           call 0x74fa40
// 006d4a09  3bc6                 cmp eax, esi
// 006d4a0b  750f                 jne 0x6d4a1c
// 006d4a0d  8bce                 mov ecx, esi
// 006d4a0f  e83cfdffff           call 0x6d4750
// 006d4a14  8bc8                 mov ecx, eax
// 006d4a16  5e                   pop esi
// 006d4a17  e9e465ffff           jmp 0x6cb000
// 006d4a1c  33c0                 xor eax, eax
// 006d4a1e  5e                   pop esi
// 006d4a1f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndent@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
