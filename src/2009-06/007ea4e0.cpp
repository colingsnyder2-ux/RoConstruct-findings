// roc 2009-06 007ea4e0  unit: CXTPCustomizeToolbarsPage  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ea4e0
//
// 007ea4e0  56                   push esi
// 007ea4e1  57                   push edi
// 007ea4e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ea4e6  8bf1                 mov esi, ecx
// 007ea4e8  8d868c000000         lea eax, [esi + 0x8c]
// 007ea4ee  50                   push eax
// 007ea4ef  6a64                 push 0x64
// 007ea4f1  57                   push edi
// 007ea4f2  e88feef2ff           call 0x719386
// 007ea4f7  8d8e50010000         lea ecx, [esi + 0x150]
// 007ea4fd  51                   push ecx
// 007ea4fe  6a66                 push 0x66
// 007ea500  57                   push edi
// 007ea501  e880eef2ff           call 0x719386
// 007ea506  8d96f8010000         lea edx, [esi + 0x1f8]
// 007ea50c  52                   push edx
// 007ea50d  6a65                 push 0x65
// 007ea50f  57                   push edi
// 007ea510  e871eef2ff           call 0x719386
// 007ea515  8d86a4010000         lea eax, [esi + 0x1a4]
// 007ea51b  50                   push eax
// 007ea51c  6a67                 push 0x67
// 007ea51e  57                   push edi
// 007ea51f  e862eef2ff           call 0x719386
// 007ea524  81c6fc000000         add esi, 0xfc
// 007ea52a  56                   push esi
// 007ea52b  6a68                 push 0x68
// 007ea52d  57                   push edi
// 007ea52e  e853eef2ff           call 0x719386
// 007ea533  5f                   pop edi
// 007ea534  5e                   pop esi
// 007ea535  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?DoDataExchange@CXTPCustomizeToolbarsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
