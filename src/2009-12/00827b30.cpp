// roc 2009-12 00827b30  unit: CXTPReportColumn  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827b30
//
// 00827b30  56                   push esi
// 00827b31  57                   push edi
// 00827b32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00827b36  8bf1                 mov esi, ecx
// 00827b38  6a01                 push 1
// 00827b3a  8d4640               lea eax, [esi + 0x40]
// 00827b3d  50                   push eax
// 00827b3e  68d4579f00           push 0x9f57d4
// 00827b43  57                   push edi
// 00827b44  e8178f0200           call 0x850a60
// 00827b49  6a01                 push 1
// 00827b4b  8d4e60               lea ecx, [esi + 0x60]
// 00827b4e  51                   push ecx
// 00827b4f  68b0589b00           push 0x9b58b0
// 00827b54  57                   push edi
// 00827b55  e8068f0200           call 0x850a60
// 00827b5a  6a00                 push 0
// 00827b5c  8d9694000000         lea edx, [esi + 0x94]
// 00827b62  52                   push edx
// 00827b63  68c8579f00           push 0x9f57c8
// 00827b68  57                   push edi
// 00827b69  e8928e0200           call 0x850a00
// 00827b6e  6a00                 push 0
// 00827b70  8d86a4000000         lea eax, [esi + 0xa4]
// 00827b76  50                   push eax
// 00827b77  68bc579f00           push 0x9f57bc
// 00827b7c  57                   push edi
// 00827b7d  e87e8e0200           call 0x850a00
// 00827b82  83c440               add esp, 0x40
// 00827b85  6a00                 push 0
// 00827b87  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00827b8d  51                   push ecx
// 00827b8e  68b0579f00           push 0x9f57b0
// 00827b93  57                   push edi
// 00827b94  e8678e0200           call 0x850a00
// 00827b99  83c410               add esp, 0x10
// 00827b9c  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 00827ba0  762b                 jbe 0x827bcd
// 00827ba2  6aff                 push -1
// 00827ba4  8d9698000000         lea edx, [esi + 0x98]
// 00827baa  52                   push edx
// 00827bab  68a0579f00           push 0x9f57a0
// 00827bb0  57                   push edi
// 00827bb1  e84a8e0200           call 0x850a00
// 00827bb6  6aff                 push -1
// 00827bb8  81c69c000000         add esi, 0x9c
// 00827bbe  56                   push esi
// 00827bbf  6890579f00           push 0x9f5790
// 00827bc4  57                   push edi
// 00827bc5  e8368e0200           call 0x850a00
// 00827bca  83c420               add esp, 0x20
// 00827bcd  5f                   pop edi
// 00827bce  5e                   pop esi
// 00827bcf  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?DoPropExchange@CXTPReportColumn@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
