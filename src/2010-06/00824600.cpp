// roc 2010-06 00824600  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824600
//
// 00824600  56                   push esi
// 00824601  8bf1                 mov esi, ecx
// 00824603  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0082460a  7414                 je 0x824620
// 0082460c  6812100000           push 0x1012
// 00824611  e85a81f8ff           call 0x7ac770
// 00824616  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 00824620  8bce                 mov ecx, esi
// 00824622  5e                   pop esi
// 00824623  e9b881f8ff           jmp 0x7ac7e0
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnExecute@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
