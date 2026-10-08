// roc 2010-06 007dc460  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dc460
//
// 007dc460  56                   push esi
// 007dc461  57                   push edi
// 007dc462  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007dc466  8bf1                 mov esi, ecx
// 007dc468  6a01                 push 1
// 007dc46a  8d467c               lea eax, [esi + 0x7c]
// 007dc46d  50                   push eax
// 007dc46e  68949ba500           push 0xa59b94
// 007dc473  57                   push edi
// 007dc474  e857860200           call 0x804ad0
// 007dc479  6a01                 push 1
// 007dc47b  8d8e80000000         lea ecx, [esi + 0x80]
// 007dc481  51                   push ecx
// 007dc482  68809ba500           push 0xa59b80
// 007dc487  57                   push edi
// 007dc488  e843860200           call 0x804ad0
// 007dc48d  6a01                 push 1
// 007dc48f  8d9684000000         lea edx, [esi + 0x84]
// 007dc495  52                   push edx
// 007dc496  686c9ba500           push 0xa59b6c
// 007dc49b  57                   push edi
// 007dc49c  e82f860200           call 0x804ad0
// 007dc4a1  6a01                 push 1
// 007dc4a3  8d8688000000         lea eax, [esi + 0x88]
// 007dc4a9  50                   push eax
// 007dc4aa  685c9ba500           push 0xa59b5c
// 007dc4af  57                   push edi
// 007dc4b0  e81b860200           call 0x804ad0
// 007dc4b5  83c440               add esp, 0x40
// 007dc4b8  6a01                 push 1
// 007dc4ba  8d8e8c000000         lea ecx, [esi + 0x8c]
// 007dc4c0  51                   push ecx
// 007dc4c1  68489ba500           push 0xa59b48
// 007dc4c6  57                   push edi
// 007dc4c7  e804860200           call 0x804ad0
// 007dc4cc  8b159c71be00         mov edx, dword ptr [0xbe719c]
// 007dc4d2  52                   push edx
// 007dc4d3  81c698000000         add esi, 0x98
// 007dc4d9  56                   push esi
// 007dc4da  68349ba500           push 0xa59b34
// 007dc4df  57                   push edi
// 007dc4e0  e8eb850200           call 0x804ad0
// 007dc4e5  83c420               add esp, 0x20
// 007dc4e8  5f                   pop edi
// 007dc4e9  5e                   pop esi
// 007dc4ea  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
