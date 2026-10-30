// roc 2010-06 00824630  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824630
//
// 00824630  56                   push esi
// 00824631  8bf1                 mov esi, ecx
// 00824633  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0082463a  7414                 je 0x824650
// 0082463c  6811100000           push 0x1011
// 00824641  e82a81f8ff           call 0x7ac770
// 00824646  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 00824650  8b442408             mov eax, dword ptr [esp + 8]
// 00824654  50                   push eax
// 00824655  8bce                 mov ecx, esi
// 00824657  e844b0fcff           call 0x7ef6a0
// 0082465c  5e                   pop esi
// 0082465d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnSetPopup@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
