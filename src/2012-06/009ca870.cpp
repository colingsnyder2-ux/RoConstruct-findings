// roc 2012-06 009ca870  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca870
//
// 009ca870  56                   push esi
// 009ca871  57                   push edi
// 009ca872  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca876  57                   push edi
// 009ca877  8bf1                 mov esi, ecx
// 009ca879  e8929fffff           call 0x9c4810
// 009ca87e  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 009ca882  7617                 jbe 0x9ca89b
// 009ca884  6aff                 push -1
// 009ca886  81c674010000         add esi, 0x174
// 009ca88c  56                   push esi
// 009ca88d  6844fdb400           push 0xb4fd44
// 009ca892  57                   push edi
// 009ca893  e888da0000           call 0x9d8320
// 009ca898  83c410               add esp, 0x10
// 009ca89b  5f                   pop edi
// 009ca89c  5e                   pop esi
// 009ca89d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?DoPropExchange@CXTPControlButtonColor@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
