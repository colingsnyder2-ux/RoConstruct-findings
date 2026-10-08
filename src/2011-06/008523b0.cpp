// roc 2011-06 008523b0  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008523b0
//
// 008523b0  56                   push esi
// 008523b1  57                   push edi
// 008523b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008523b6  57                   push edi
// 008523b7  8bf1                 mov esi, ecx
// 008523b9  e8029fffff           call 0x84c2c0
// 008523be  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 008523c2  7617                 jbe 0x8523db
// 008523c4  6aff                 push -1
// 008523c6  81c674010000         add esi, 0x174
// 008523cc  56                   push esi
// 008523cd  68dc5da600           push 0xa65ddc
// 008523d2  57                   push edi
// 008523d3  e878db0000           call 0x85ff50
// 008523d8  83c410               add esp, 0x10
// 008523db  5f                   pop edi
// 008523dc  5e                   pop esi
// 008523dd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?DoPropExchange@CXTPControlButtonColor@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
