// from server: 100% by auto
// roc 2007-08 006764f0  unit: CXTPCustomizeCommandsPage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006764f0
//
// 006764f0  56                   push esi
// 006764f1  57                   push edi
// 006764f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006764f6  8bf1                 mov esi, ecx
// 006764f8  8d8688000000         lea eax, [esi + 0x88]
// 006764fe  50                   push eax
// 006764ff  6a65                 push 0x65
// 00676501  57                   push edi
// 00676502  e813230c00           call 0x73881a
// 00676507  81c6e4000000         add esi, 0xe4
// 0067650d  56                   push esi
// 0067650e  6a64                 push 0x64
// 00676510  57                   push edi
// 00676511  e804230c00           call 0x73881a
// 00676516  5f                   pop edi
// 00676517  5e                   pop esi
// 00676518  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?DoDataExchange@CXTPCustomizeCommandsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeCommandsPage.cpp
