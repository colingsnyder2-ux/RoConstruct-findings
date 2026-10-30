// roc 2011-06 008816a0  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008816a0
//
// 008816a0  56                   push esi
// 008816a1  8bf1                 mov esi, ecx
// 008816a3  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 008816aa  7414                 je 0x8816c0
// 008816ac  6812100000           push 0x1012
// 008816b1  e89ad5f8ff           call 0x80ec50
// 008816b6  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 008816c0  8bce                 mov ecx, esi
// 008816c2  5e                   pop esi
// 008816c3  e9f8d5f8ff           jmp 0x80ecc0
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnExecute@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
