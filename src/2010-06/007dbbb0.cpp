// roc 2010-06 007dbbb0  unit: CXTPReportColumn  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbbb0
//
// 007dbbb0  56                   push esi
// 007dbbb1  57                   push edi
// 007dbbb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007dbbb6  8bf1                 mov esi, ecx
// 007dbbb8  6a01                 push 1
// 007dbbba  8d4640               lea eax, [esi + 0x40]
// 007dbbbd  50                   push eax
// 007dbbbe  68bc9aa500           push 0xa59abc
// 007dbbc3  57                   push edi
// 007dbbc4  e8078f0200           call 0x804ad0
// 007dbbc9  6a01                 push 1
// 007dbbcb  8d4e60               lea ecx, [esi + 0x60]
// 007dbbce  51                   push ecx
// 007dbbcf  688068a100           push 0xa16880
// 007dbbd4  57                   push edi
// 007dbbd5  e8f68e0200           call 0x804ad0
// 007dbbda  6a00                 push 0
// 007dbbdc  8d9694000000         lea edx, [esi + 0x94]
// 007dbbe2  52                   push edx
// 007dbbe3  68b09aa500           push 0xa59ab0
// 007dbbe8  57                   push edi
// 007dbbe9  e8528e0200           call 0x804a40
// 007dbbee  6a00                 push 0
// 007dbbf0  8d86a4000000         lea eax, [esi + 0xa4]
// 007dbbf6  50                   push eax
// 007dbbf7  68a49aa500           push 0xa59aa4
// 007dbbfc  57                   push edi
// 007dbbfd  e83e8e0200           call 0x804a40
// 007dbc02  83c440               add esp, 0x40
// 007dbc05  6a00                 push 0
// 007dbc07  8d8ea0000000         lea ecx, [esi + 0xa0]
// 007dbc0d  51                   push ecx
// 007dbc0e  68989aa500           push 0xa59a98
// 007dbc13  57                   push edi
// 007dbc14  e8278e0200           call 0x804a40
// 007dbc19  83c410               add esp, 0x10
// 007dbc1c  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 007dbc20  762b                 jbe 0x7dbc4d
// 007dbc22  6aff                 push -1
// 007dbc24  8d9698000000         lea edx, [esi + 0x98]
// 007dbc2a  52                   push edx
// 007dbc2b  68889aa500           push 0xa59a88
// 007dbc30  57                   push edi
// 007dbc31  e80a8e0200           call 0x804a40
// 007dbc36  6aff                 push -1
// 007dbc38  81c69c000000         add esi, 0x9c
// 007dbc3e  56                   push esi
// 007dbc3f  68789aa500           push 0xa59a78
// 007dbc44  57                   push edi
// 007dbc45  e8f68d0200           call 0x804a40
// 007dbc4a  83c420               add esp, 0x20
// 007dbc4d  5f                   pop edi
// 007dbc4e  5e                   pop esi
// 007dbc4f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?DoPropExchange@CXTPReportColumn@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
