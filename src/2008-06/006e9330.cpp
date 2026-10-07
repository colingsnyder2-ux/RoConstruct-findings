// roc 2008-06 006e9330  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9330
//
// 006e9330  56                   push esi
// 006e9331  57                   push edi
// 006e9332  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e9336  57                   push edi
// 006e9337  8bf1                 mov esi, ecx
// 006e9339  e8929effff           call 0x6e31d0
// 006e933e  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 006e9342  7617                 jbe 0x6e935b
// 006e9344  6aff                 push -1
// 006e9346  81c674010000         add esi, 0x174
// 006e934c  56                   push esi
// 006e934d  68e00d8100           push 0x810de0
// 006e9352  57                   push edi
// 006e9353  e8b83f0100           call 0x6fd310
// 006e9358  83c410               add esp, 0x10
// 006e935b  5f                   pop edi
// 006e935c  5e                   pop esi
// 006e935d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?DoPropExchange@CXTPControlButtonColor@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
