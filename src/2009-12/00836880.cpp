// roc 2009-12 00836880  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836880
//
// 00836880  56                   push esi
// 00836881  57                   push edi
// 00836882  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00836886  57                   push edi
// 00836887  8bf1                 mov esi, ecx
// 00836889  e822fcffff           call 0x8364b0
// 0083688e  837f2c12             cmp dword ptr [edi + 0x2c], 0x12
// 00836892  7317                 jae 0x8368ab
// 00836894  6a00                 push 0
// 00836896  81c648010000         add esi, 0x148
// 0083689c  56                   push esi
// 0083689d  6844a29d00           push 0x9da244
// 008368a2  57                   push edi
// 008368a3  e858a10100           call 0x850a00
// 008368a8  83c410               add esp, 0x10
// 008368ab  5f                   pop edi
// 008368ac  5e                   pop esi
// 008368ad  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlButton@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
