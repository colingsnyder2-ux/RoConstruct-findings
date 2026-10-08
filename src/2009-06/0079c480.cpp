// roc 2009-06 0079c480  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c480
//
// 0079c480  56                   push esi
// 0079c481  8bf1                 mov esi, ecx
// 0079c483  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0079c48a  7414                 je 0x79c4a0
// 0079c48c  6812100000           push 0x1012
// 0079c491  e8ba59f8ff           call 0x721e50
// 0079c496  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 0079c4a0  8bce                 mov ecx, esi
// 0079c4a2  5e                   pop esi
// 0079c4a3  e9185af8ff           jmp 0x721ec0
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnExecute@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
