// roc 2012-06 009f9ce0  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9ce0
//
// 009f9ce0  56                   push esi
// 009f9ce1  8bf1                 mov esi, ecx
// 009f9ce3  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 009f9cea  7414                 je 0x9f9d00
// 009f9cec  6811100000           push 0x1011
// 009f9cf1  e86ad2f8ff           call 0x986f60
// 009f9cf6  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 009f9d00  8b442408             mov eax, dword ptr [esp + 8]
// 009f9d04  50                   push eax
// 009f9d05  8bce                 mov ecx, esi
// 009f9d07  e8b4f6fcff           call 0x9c93c0
// 009f9d0c  5e                   pop esi
// 009f9d0d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnSetPopup@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
