// roc 2009-12 00877400  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877400
//
// 00877400  56                   push esi
// 00877401  8bf1                 mov esi, ecx
// 00877403  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087740a  7414                 je 0x877420
// 0087740c  6812100000           push 0x1012
// 00877411  e87a11f8ff           call 0x7f8590
// 00877416  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 00877420  8bce                 mov ecx, esi
// 00877422  5e                   pop esi
// 00877423  e9d811f8ff           jmp 0x7f8600
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnExecute@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
