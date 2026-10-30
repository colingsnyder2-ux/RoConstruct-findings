// roc 2009-12 008283e0  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008283e0
//
// 008283e0  56                   push esi
// 008283e1  57                   push edi
// 008283e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008283e6  8bf1                 mov esi, ecx
// 008283e8  6a01                 push 1
// 008283ea  8d467c               lea eax, [esi + 0x7c]
// 008283ed  50                   push eax
// 008283ee  68ac589f00           push 0x9f58ac
// 008283f3  57                   push edi
// 008283f4  e867860200           call 0x850a60
// 008283f9  6a01                 push 1
// 008283fb  8d8e80000000         lea ecx, [esi + 0x80]
// 00828401  51                   push ecx
// 00828402  6898589f00           push 0x9f5898
// 00828407  57                   push edi
// 00828408  e853860200           call 0x850a60
// 0082840d  6a01                 push 1
// 0082840f  8d9684000000         lea edx, [esi + 0x84]
// 00828415  52                   push edx
// 00828416  6884589f00           push 0x9f5884
// 0082841b  57                   push edi
// 0082841c  e83f860200           call 0x850a60
// 00828421  6a01                 push 1
// 00828423  8d8688000000         lea eax, [esi + 0x88]
// 00828429  50                   push eax
// 0082842a  6874589f00           push 0x9f5874
// 0082842f  57                   push edi
// 00828430  e82b860200           call 0x850a60
// 00828435  83c440               add esp, 0x40
// 00828438  6a01                 push 1
// 0082843a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00828440  51                   push ecx
// 00828441  6860589f00           push 0x9f5860
// 00828446  57                   push edi
// 00828447  e814860200           call 0x850a60
// 0082844c  8b15ec63b600         mov edx, dword ptr [0xb663ec]
// 00828452  52                   push edx
// 00828453  81c698000000         add esi, 0x98
// 00828459  56                   push esi
// 0082845a  684c589f00           push 0x9f584c
// 0082845f  57                   push edi
// 00828460  e8fb850200           call 0x850a60
// 00828465  83c420               add esp, 0x20
// 00828468  5f                   pop edi
// 00828469  5e                   pop esi
// 0082846a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
