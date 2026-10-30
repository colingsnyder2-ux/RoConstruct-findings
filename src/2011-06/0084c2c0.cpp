// roc 2011-06 0084c2c0  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c2c0
//
// 0084c2c0  56                   push esi
// 0084c2c1  57                   push edi
// 0084c2c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084c2c6  57                   push edi
// 0084c2c7  8bf1                 mov esi, ecx
// 0084c2c9  e822fcffff           call 0x84bef0
// 0084c2ce  837f2c12             cmp dword ptr [edi + 0x2c], 0x12
// 0084c2d2  7317                 jae 0x84c2eb
// 0084c2d4  6a00                 push 0
// 0084c2d6  81c648010000         add esi, 0x148
// 0084c2dc  56                   push esi
// 0084c2dd  6844e2a900           push 0xa9e244
// 0084c2e2  57                   push edi
// 0084c2e3  e8683c0100           call 0x85ff50
// 0084c2e8  83c410               add esp, 0x10
// 0084c2eb  5f                   pop edi
// 0084c2ec  5e                   pop esi
// 0084c2ed  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlButton@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
