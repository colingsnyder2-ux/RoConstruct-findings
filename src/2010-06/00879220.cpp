// roc 2010-06 00879220  unit: CXTPCustomizeToolbarsPage  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879220
//
// 00879220  56                   push esi
// 00879221  57                   push edi
// 00879222  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00879226  8bf1                 mov esi, ecx
// 00879228  8d868c000000         lea eax, [esi + 0x8c]
// 0087922e  50                   push eax
// 0087922f  6a64                 push 0x64
// 00879231  57                   push edi
// 00879232  e8b7f0f2ff           call 0x7a82ee
// 00879237  8d8e50010000         lea ecx, [esi + 0x150]
// 0087923d  51                   push ecx
// 0087923e  6a66                 push 0x66
// 00879240  57                   push edi
// 00879241  e8a8f0f2ff           call 0x7a82ee
// 00879246  8d96f8010000         lea edx, [esi + 0x1f8]
// 0087924c  52                   push edx
// 0087924d  6a65                 push 0x65
// 0087924f  57                   push edi
// 00879250  e899f0f2ff           call 0x7a82ee
// 00879255  8d86a4010000         lea eax, [esi + 0x1a4]
// 0087925b  50                   push eax
// 0087925c  6a67                 push 0x67
// 0087925e  57                   push edi
// 0087925f  e88af0f2ff           call 0x7a82ee
// 00879264  81c6fc000000         add esi, 0xfc
// 0087926a  56                   push esi
// 0087926b  6a68                 push 0x68
// 0087926d  57                   push edi
// 0087926e  e87bf0f2ff           call 0x7a82ee
// 00879273  5f                   pop edi
// 00879274  5e                   pop esi
// 00879275  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?DoDataExchange@CXTPCustomizeToolbarsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
