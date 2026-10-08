// from server: 100% by auto
// roc 2008-06 0072ddf0  unit: CXTPControlGallery  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ddf0
//
// 0072ddf0  56                   push esi
// 0072ddf1  8bf1                 mov esi, ecx
// 0072ddf3  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0072ddfa  7414                 je 0x72de10
// 0072ddfc  6812100000           push 0x1012
// 0072de01  e83af9f7ff           call 0x6ad740
// 0072de06  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 0072de10  8bce                 mov ecx, esi
// 0072de12  5e                   pop esi
// 0072de13  e998f9f7ff           jmp 0x6ad7b0
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnExecute@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
