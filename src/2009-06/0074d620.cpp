// roc 2009-06 0074d620  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d620
//
// 0074d620  56                   push esi
// 0074d621  57                   push edi
// 0074d622  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074d626  8bf1                 mov esi, ecx
// 0074d628  6a01                 push 1
// 0074d62a  8d467c               lea eax, [esi + 0x7c]
// 0074d62d  50                   push eax
// 0074d62e  6804548f00           push 0x8f5404
// 0074d633  57                   push edi
// 0074d634  e8c7860200           call 0x775d00
// 0074d639  6a01                 push 1
// 0074d63b  8d8e80000000         lea ecx, [esi + 0x80]
// 0074d641  51                   push ecx
// 0074d642  68f0538f00           push 0x8f53f0
// 0074d647  57                   push edi
// 0074d648  e8b3860200           call 0x775d00
// 0074d64d  6a01                 push 1
// 0074d64f  8d9684000000         lea edx, [esi + 0x84]
// 0074d655  52                   push edx
// 0074d656  68dc538f00           push 0x8f53dc
// 0074d65b  57                   push edi
// 0074d65c  e89f860200           call 0x775d00
// 0074d661  6a01                 push 1
// 0074d663  8d8688000000         lea eax, [esi + 0x88]
// 0074d669  50                   push eax
// 0074d66a  68cc538f00           push 0x8f53cc
// 0074d66f  57                   push edi
// 0074d670  e88b860200           call 0x775d00
// 0074d675  83c440               add esp, 0x40
// 0074d678  6a01                 push 1
// 0074d67a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0074d680  51                   push ecx
// 0074d681  68b8538f00           push 0x8f53b8
// 0074d686  57                   push edi
// 0074d687  e874860200           call 0x775d00
// 0074d68c  8b151c61a200         mov edx, dword ptr [0xa2611c]
// 0074d692  52                   push edx
// 0074d693  81c698000000         add esi, 0x98
// 0074d699  56                   push esi
// 0074d69a  68a4538f00           push 0x8f53a4
// 0074d69f  57                   push edi
// 0074d6a0  e85b860200           call 0x775d00
// 0074d6a5  83c420               add esp, 0x20
// 0074d6a8  5f                   pop edi
// 0074d6a9  5e                   pop esi
// 0074d6aa  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
