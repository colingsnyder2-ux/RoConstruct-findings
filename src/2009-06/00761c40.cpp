// roc 2009-06 00761c40  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761c40
//
// 00761c40  56                   push esi
// 00761c41  57                   push edi
// 00761c42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00761c46  57                   push edi
// 00761c47  8bf1                 mov esi, ecx
// 00761c49  e8129effff           call 0x75ba60
// 00761c4e  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 00761c52  7617                 jbe 0x761c6b
// 00761c54  6aff                 push -1
// 00761c56  81c674010000         add esi, 0x174
// 00761c5c  56                   push esi
// 00761c5d  68bc138b00           push 0x8b13bc
// 00761c62  57                   push edi
// 00761c63  e838400100           call 0x775ca0
// 00761c68  83c410               add esp, 0x10
// 00761c6b  5f                   pop edi
// 00761c6c  5e                   pop esi
// 00761c6d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?DoPropExchange@CXTPControlButtonColor@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
