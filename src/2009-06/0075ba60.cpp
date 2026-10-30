// roc 2009-06 0075ba60  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075ba60
//
// 0075ba60  56                   push esi
// 0075ba61  57                   push edi
// 0075ba62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075ba66  57                   push edi
// 0075ba67  8bf1                 mov esi, ecx
// 0075ba69  e822fcffff           call 0x75b690
// 0075ba6e  837f2c12             cmp dword ptr [edi + 0x2c], 0x12
// 0075ba72  7317                 jae 0x75ba8b
// 0075ba74  6a00                 push 0
// 0075ba76  81c648010000         add esi, 0x148
// 0075ba7c  56                   push esi
// 0075ba7d  686c278e00           push 0x8e276c
// 0075ba82  57                   push edi
// 0075ba83  e818a20100           call 0x775ca0
// 0075ba88  83c410               add esp, 0x10
// 0075ba8b  5f                   pop edi
// 0075ba8c  5e                   pop esi
// 0075ba8d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlButton@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
