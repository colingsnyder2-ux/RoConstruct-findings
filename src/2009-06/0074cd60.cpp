// roc 2009-06 0074cd60  unit: CXTPReportColumn  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cd60
//
// 0074cd60  56                   push esi
// 0074cd61  57                   push edi
// 0074cd62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074cd66  8bf1                 mov esi, ecx
// 0074cd68  6a01                 push 1
// 0074cd6a  8d4640               lea eax, [esi + 0x40]
// 0074cd6d  50                   push eax
// 0074cd6e  682c538f00           push 0x8f532c
// 0074cd73  57                   push edi
// 0074cd74  e8878f0200           call 0x775d00
// 0074cd79  6a01                 push 1
// 0074cd7b  8d4e60               lea ecx, [esi + 0x60]
// 0074cd7e  51                   push ecx
// 0074cd7f  68c4ff8b00           push 0x8bffc4
// 0074cd84  57                   push edi
// 0074cd85  e8768f0200           call 0x775d00
// 0074cd8a  6a00                 push 0
// 0074cd8c  8d9694000000         lea edx, [esi + 0x94]
// 0074cd92  52                   push edx
// 0074cd93  6820538f00           push 0x8f5320
// 0074cd98  57                   push edi
// 0074cd99  e8028f0200           call 0x775ca0
// 0074cd9e  6a00                 push 0
// 0074cda0  8d86a4000000         lea eax, [esi + 0xa4]
// 0074cda6  50                   push eax
// 0074cda7  6814538f00           push 0x8f5314
// 0074cdac  57                   push edi
// 0074cdad  e8ee8e0200           call 0x775ca0
// 0074cdb2  83c440               add esp, 0x40
// 0074cdb5  6a00                 push 0
// 0074cdb7  8d8ea0000000         lea ecx, [esi + 0xa0]
// 0074cdbd  51                   push ecx
// 0074cdbe  6808538f00           push 0x8f5308
// 0074cdc3  57                   push edi
// 0074cdc4  e8d78e0200           call 0x775ca0
// 0074cdc9  83c410               add esp, 0x10
// 0074cdcc  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 0074cdd0  762b                 jbe 0x74cdfd
// 0074cdd2  6aff                 push -1
// 0074cdd4  8d9698000000         lea edx, [esi + 0x98]
// 0074cdda  52                   push edx
// 0074cddb  68f8528f00           push 0x8f52f8
// 0074cde0  57                   push edi
// 0074cde1  e8ba8e0200           call 0x775ca0
// 0074cde6  6aff                 push -1
// 0074cde8  81c69c000000         add esi, 0x9c
// 0074cdee  56                   push esi
// 0074cdef  68e8528f00           push 0x8f52e8
// 0074cdf4  57                   push edi
// 0074cdf5  e8a68e0200           call 0x775ca0
// 0074cdfa  83c420               add esp, 0x20
// 0074cdfd  5f                   pop edi
// 0074cdfe  5e                   pop esi
// 0074cdff  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?DoPropExchange@CXTPReportColumn@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
