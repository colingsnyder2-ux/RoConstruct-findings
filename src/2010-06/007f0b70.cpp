// roc 2010-06 007f0b70  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0b70
//
// 007f0b70  56                   push esi
// 007f0b71  57                   push edi
// 007f0b72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f0b76  57                   push edi
// 007f0b77  8bf1                 mov esi, ecx
// 007f0b79  e8229fffff           call 0x7eaaa0
// 007f0b7e  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 007f0b82  7617                 jbe 0x7f0b9b
// 007f0b84  6aff                 push -1
// 007f0b86  81c674010000         add esi, 0x174
// 007f0b8c  56                   push esi
// 007f0b8d  68004ea000           push 0xa04e00
// 007f0b92  57                   push edi
// 007f0b93  e8a83e0100           call 0x804a40
// 007f0b98  83c410               add esp, 0x10
// 007f0b9b  5f                   pop edi
// 007f0b9c  5e                   pop esi
// 007f0b9d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?DoPropExchange@CXTPControlButtonColor@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
