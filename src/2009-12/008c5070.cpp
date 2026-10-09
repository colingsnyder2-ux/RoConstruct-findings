// roc 2009-12 008c5070  unit: CXTPCustomizeToolbarsPage  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5070
//
// 008c5070  56                   push esi
// 008c5071  57                   push edi
// 008c5072  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c5076  8bf1                 mov esi, ecx
// 008c5078  8d868c000000         lea eax, [esi + 0x8c]
// 008c507e  50                   push eax
// 008c507f  6a64                 push 0x64
// 008c5081  57                   push edi
// 008c5082  e827f1f2ff           call 0x7f41ae
// 008c5087  8d8e50010000         lea ecx, [esi + 0x150]
// 008c508d  51                   push ecx
// 008c508e  6a66                 push 0x66
// 008c5090  57                   push edi
// 008c5091  e818f1f2ff           call 0x7f41ae
// 008c5096  8d96f8010000         lea edx, [esi + 0x1f8]
// 008c509c  52                   push edx
// 008c509d  6a65                 push 0x65
// 008c509f  57                   push edi
// 008c50a0  e809f1f2ff           call 0x7f41ae
// 008c50a5  8d86a4010000         lea eax, [esi + 0x1a4]
// 008c50ab  50                   push eax
// 008c50ac  6a67                 push 0x67
// 008c50ae  57                   push edi
// 008c50af  e8faf0f2ff           call 0x7f41ae
// 008c50b4  81c6fc000000         add esi, 0xfc
// 008c50ba  56                   push esi
// 008c50bb  6a68                 push 0x68
// 008c50bd  57                   push edi
// 008c50be  e8ebf0f2ff           call 0x7f41ae
// 008c50c3  5f                   pop edi
// 008c50c4  5e                   pop esi
// 008c50c5  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?DoDataExchange@CXTPCustomizeToolbarsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
