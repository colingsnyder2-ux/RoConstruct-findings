// roc 2012-06 009c4810  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c4810
//
// 009c4810  56                   push esi
// 009c4811  57                   push edi
// 009c4812  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c4816  57                   push edi
// 009c4817  8bf1                 mov esi, ecx
// 009c4819  e822fcffff           call 0x9c4440
// 009c481e  837f2c12             cmp dword ptr [edi + 0x2c], 0x12
// 009c4822  7317                 jae 0x9c483b
// 009c4824  6a00                 push 0
// 009c4826  81c648010000         add esi, 0x148
// 009c482c  56                   push esi
// 009c482d  682481ba00           push 0xba8124
// 009c4832  57                   push edi
// 009c4833  e8e83a0100           call 0x9d8320
// 009c4838  83c410               add esp, 0x10
// 009c483b  5f                   pop edi
// 009c483c  5e                   pop esi
// 009c483d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlButton@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
