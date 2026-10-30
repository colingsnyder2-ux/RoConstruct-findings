// roc 2010-06 007eaaa0  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eaaa0
//
// 007eaaa0  56                   push esi
// 007eaaa1  57                   push edi
// 007eaaa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007eaaa6  57                   push edi
// 007eaaa7  8bf1                 mov esi, ecx
// 007eaaa9  e822fcffff           call 0x7ea6d0
// 007eaaae  837f2c12             cmp dword ptr [edi + 0x2c], 0x12
// 007eaab2  7317                 jae 0x7eaacb
// 007eaab4  6a00                 push 0
// 007eaab6  81c648010000         add esi, 0x148
// 007eaabc  56                   push esi
// 007eaabd  68849ba300           push 0xa39b84
// 007eaac2  57                   push edi
// 007eaac3  e8789f0100           call 0x804a40
// 007eaac8  83c410               add esp, 0x10
// 007eaacb  5f                   pop edi
// 007eaacc  5e                   pop esi
// 007eaacd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlButton@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
