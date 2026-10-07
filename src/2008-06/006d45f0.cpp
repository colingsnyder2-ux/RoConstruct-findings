// roc 2008-06 006d45f0  unit: CXTPReportColumn  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d45f0
//
// 006d45f0  56                   push esi
// 006d45f1  57                   push edi
// 006d45f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d45f6  8bf1                 mov esi, ecx
// 006d45f8  6a01                 push 1
// 006d45fa  8d4640               lea eax, [esi + 0x40]
// 006d45fd  50                   push eax
// 006d45fe  68e4428500           push 0x8542e4
// 006d4603  57                   push edi
// 006d4604  e8978d0200           call 0x6fd3a0
// 006d4609  6a01                 push 1
// 006d460b  8d4e60               lea ecx, [esi + 0x60]
// 006d460e  51                   push ecx
// 006d460f  6814e58100           push 0x81e514
// 006d4614  57                   push edi
// 006d4615  e8868d0200           call 0x6fd3a0
// 006d461a  6a00                 push 0
// 006d461c  8d9694000000         lea edx, [esi + 0x94]
// 006d4622  52                   push edx
// 006d4623  68d8428500           push 0x8542d8
// 006d4628  57                   push edi
// 006d4629  e8e28c0200           call 0x6fd310
// 006d462e  6a00                 push 0
// 006d4630  8d86a4000000         lea eax, [esi + 0xa4]
// 006d4636  50                   push eax
// 006d4637  68cc428500           push 0x8542cc
// 006d463c  57                   push edi
// 006d463d  e8ce8c0200           call 0x6fd310
// 006d4642  83c440               add esp, 0x40
// 006d4645  6a00                 push 0
// 006d4647  8d8ea0000000         lea ecx, [esi + 0xa0]
// 006d464d  51                   push ecx
// 006d464e  68c0428500           push 0x8542c0
// 006d4653  57                   push edi
// 006d4654  e8b78c0200           call 0x6fd310
// 006d4659  83c410               add esp, 0x10
// 006d465c  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 006d4660  762b                 jbe 0x6d468d
// 006d4662  6aff                 push -1
// 006d4664  8d9698000000         lea edx, [esi + 0x98]
// 006d466a  52                   push edx
// 006d466b  68b0428500           push 0x8542b0
// 006d4670  57                   push edi
// 006d4671  e89a8c0200           call 0x6fd310
// 006d4676  6aff                 push -1
// 006d4678  81c69c000000         add esi, 0x9c
// 006d467e  56                   push esi
// 006d467f  68a0428500           push 0x8542a0
// 006d4684  57                   push edi
// 006d4685  e8868c0200           call 0x6fd310
// 006d468a  83c420               add esp, 0x20
// 006d468d  5f                   pop edi
// 006d468e  5e                   pop esi
// 006d468f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?DoPropExchange@CXTPReportColumn@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
