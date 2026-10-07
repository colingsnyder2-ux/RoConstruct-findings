// roc 2008-06 006e31d0  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e31d0
//
// 006e31d0  56                   push esi
// 006e31d1  57                   push edi
// 006e31d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e31d6  57                   push edi
// 006e31d7  8bf1                 mov esi, ecx
// 006e31d9  e822fcffff           call 0x6e2e00
// 006e31de  837f2c12             cmp dword ptr [edi + 0x2c], 0x12
// 006e31e2  7317                 jae 0x6e31fb
// 006e31e4  6a00                 push 0
// 006e31e6  81c648010000         add esi, 0x148
// 006e31ec  56                   push esi
// 006e31ed  68f8658500           push 0x8565f8
// 006e31f2  57                   push edi
// 006e31f3  e818a10100           call 0x6fd310
// 006e31f8  83c410               add esp, 0x10
// 006e31fb  5f                   pop edi
// 006e31fc  5e                   pop esi
// 006e31fd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlButton@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
