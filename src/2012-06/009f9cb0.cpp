// roc 2012-06 009f9cb0  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9cb0
//
// 009f9cb0  56                   push esi
// 009f9cb1  8bf1                 mov esi, ecx
// 009f9cb3  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 009f9cba  7414                 je 0x9f9cd0
// 009f9cbc  6812100000           push 0x1012
// 009f9cc1  e89ad2f8ff           call 0x986f60
// 009f9cc6  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 009f9cd0  8bce                 mov ecx, esi
// 009f9cd2  5e                   pop esi
// 009f9cd3  e9f8d2f8ff           jmp 0x986fd0
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnExecute@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
