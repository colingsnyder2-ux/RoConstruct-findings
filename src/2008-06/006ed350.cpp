// roc 2008-06 006ed350  unit: CXTPCustomizeCommandsPage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed350
//
// 006ed350  56                   push esi
// 006ed351  57                   push edi
// 006ed352  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ed356  8bf1                 mov esi, ecx
// 006ed358  8d8688000000         lea eax, [esi + 0x88]
// 006ed35e  50                   push eax
// 006ed35f  6a65                 push 0x65
// 006ed361  57                   push edi
// 006ed362  e8893bfbff           call 0x6a0ef0
// 006ed367  81c6e4000000         add esi, 0xe4
// 006ed36d  56                   push esi
// 006ed36e  6a64                 push 0x64
// 006ed370  57                   push edi
// 006ed371  e87a3bfbff           call 0x6a0ef0
// 006ed376  5f                   pop edi
// 006ed377  5e                   pop esi
// 006ed378  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?DoDataExchange@CXTPCustomizeCommandsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeCommandsPage.cpp
