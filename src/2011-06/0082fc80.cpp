// roc 2011-06 0082fc80  unit: CXTPReportColumn  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc80
//
// 0082fc80  56                   push esi
// 0082fc81  57                   push edi
// 0082fc82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082fc86  8bf1                 mov esi, ecx
// 0082fc88  6a01                 push 1
// 0082fc8a  8d4640               lea eax, [esi + 0x40]
// 0082fc8d  50                   push eax
// 0082fc8e  684c47ac00           push 0xac474c
// 0082fc93  57                   push edi
// 0082fc94  e817030300           call 0x85ffb0
// 0082fc99  6a01                 push 1
// 0082fc9b  8d4e60               lea ecx, [esi + 0x60]
// 0082fc9e  51                   push ecx
// 0082fc9f  689c3eaa00           push 0xaa3e9c
// 0082fca4  57                   push edi
// 0082fca5  e806030300           call 0x85ffb0
// 0082fcaa  6a00                 push 0
// 0082fcac  8d9694000000         lea edx, [esi + 0x94]
// 0082fcb2  52                   push edx
// 0082fcb3  684047ac00           push 0xac4740
// 0082fcb8  57                   push edi
// 0082fcb9  e892020300           call 0x85ff50
// 0082fcbe  6a00                 push 0
// 0082fcc0  8d86a4000000         lea eax, [esi + 0xa4]
// 0082fcc6  50                   push eax
// 0082fcc7  683447ac00           push 0xac4734
// 0082fccc  57                   push edi
// 0082fccd  e87e020300           call 0x85ff50
// 0082fcd2  83c440               add esp, 0x40
// 0082fcd5  6a00                 push 0
// 0082fcd7  8d8ea0000000         lea ecx, [esi + 0xa0]
// 0082fcdd  51                   push ecx
// 0082fcde  682847ac00           push 0xac4728
// 0082fce3  57                   push edi
// 0082fce4  e867020300           call 0x85ff50
// 0082fce9  83c410               add esp, 0x10
// 0082fcec  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 0082fcf0  762b                 jbe 0x82fd1d
// 0082fcf2  6aff                 push -1
// 0082fcf4  8d9698000000         lea edx, [esi + 0x98]
// 0082fcfa  52                   push edx
// 0082fcfb  681847ac00           push 0xac4718
// 0082fd00  57                   push edi
// 0082fd01  e84a020300           call 0x85ff50
// 0082fd06  6aff                 push -1
// 0082fd08  81c69c000000         add esi, 0x9c
// 0082fd0e  56                   push esi
// 0082fd0f  680847ac00           push 0xac4708
// 0082fd14  57                   push edi
// 0082fd15  e836020300           call 0x85ff50
// 0082fd1a  83c420               add esp, 0x20
// 0082fd1d  5f                   pop edi
// 0082fd1e  5e                   pop esi
// 0082fd1f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?DoPropExchange@CXTPReportColumn@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
