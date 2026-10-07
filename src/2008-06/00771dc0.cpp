// roc 2008-06 00771dc0  unit: CXTPCustomizeToolbarsPage  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771dc0
//
// 00771dc0  56                   push esi
// 00771dc1  57                   push edi
// 00771dc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00771dc6  8bf1                 mov esi, ecx
// 00771dc8  8d868c000000         lea eax, [esi + 0x8c]
// 00771dce  50                   push eax
// 00771dcf  6a64                 push 0x64
// 00771dd1  57                   push edi
// 00771dd2  e819f1f2ff           call 0x6a0ef0
// 00771dd7  8d8e50010000         lea ecx, [esi + 0x150]
// 00771ddd  51                   push ecx
// 00771dde  6a66                 push 0x66
// 00771de0  57                   push edi
// 00771de1  e80af1f2ff           call 0x6a0ef0
// 00771de6  8d96f8010000         lea edx, [esi + 0x1f8]
// 00771dec  52                   push edx
// 00771ded  6a65                 push 0x65
// 00771def  57                   push edi
// 00771df0  e8fbf0f2ff           call 0x6a0ef0
// 00771df5  8d86a4010000         lea eax, [esi + 0x1a4]
// 00771dfb  50                   push eax
// 00771dfc  6a67                 push 0x67
// 00771dfe  57                   push edi
// 00771dff  e8ecf0f2ff           call 0x6a0ef0
// 00771e04  81c6fc000000         add esi, 0xfc
// 00771e0a  56                   push esi
// 00771e0b  6a68                 push 0x68
// 00771e0d  57                   push edi
// 00771e0e  e8ddf0f2ff           call 0x6a0ef0
// 00771e13  5f                   pop edi
// 00771e14  5e                   pop esi
// 00771e15  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?DoDataExchange@CXTPCustomizeToolbarsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
