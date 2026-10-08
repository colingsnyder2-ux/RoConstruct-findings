// roc 2012-06 009a8270  unit: CXTPReportColumn  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8270
//
// 009a8270  56                   push esi
// 009a8271  57                   push edi
// 009a8272  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009a8276  8bf1                 mov esi, ecx
// 009a8278  6a01                 push 1
// 009a827a  8d4640               lea eax, [esi + 0x40]
// 009a827d  50                   push eax
// 009a827e  682cfec000           push 0xc0fe2c
// 009a8283  57                   push edi
// 009a8284  e827010300           call 0x9d83b0
// 009a8289  6a01                 push 1
// 009a828b  8d4e60               lea ecx, [esi + 0x60]
// 009a828e  51                   push ecx
// 009a828f  68c837bc00           push 0xbc37c8
// 009a8294  57                   push edi
// 009a8295  e816010300           call 0x9d83b0
// 009a829a  6a00                 push 0
// 009a829c  8d9694000000         lea edx, [esi + 0x94]
// 009a82a2  52                   push edx
// 009a82a3  6820fec000           push 0xc0fe20
// 009a82a8  57                   push edi
// 009a82a9  e872000300           call 0x9d8320
// 009a82ae  6a00                 push 0
// 009a82b0  8d86a4000000         lea eax, [esi + 0xa4]
// 009a82b6  50                   push eax
// 009a82b7  6814fec000           push 0xc0fe14
// 009a82bc  57                   push edi
// 009a82bd  e85e000300           call 0x9d8320
// 009a82c2  83c440               add esp, 0x40
// 009a82c5  6a00                 push 0
// 009a82c7  8d8ea0000000         lea ecx, [esi + 0xa0]
// 009a82cd  51                   push ecx
// 009a82ce  6808fec000           push 0xc0fe08
// 009a82d3  57                   push edi
// 009a82d4  e847000300           call 0x9d8320
// 009a82d9  83c410               add esp, 0x10
// 009a82dc  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 009a82e0  762b                 jbe 0x9a830d
// 009a82e2  6aff                 push -1
// 009a82e4  8d9698000000         lea edx, [esi + 0x98]
// 009a82ea  52                   push edx
// 009a82eb  68f8fdc000           push 0xc0fdf8
// 009a82f0  57                   push edi
// 009a82f1  e82a000300           call 0x9d8320
// 009a82f6  6aff                 push -1
// 009a82f8  81c69c000000         add esi, 0x9c
// 009a82fe  56                   push esi
// 009a82ff  68e8fdc000           push 0xc0fde8
// 009a8304  57                   push edi
// 009a8305  e816000300           call 0x9d8320
// 009a830a  83c420               add esp, 0x20
// 009a830d  5f                   pop edi
// 009a830e  5e                   pop esi
// 009a830f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?DoPropExchange@CXTPReportColumn@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
