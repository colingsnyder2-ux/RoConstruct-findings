// roc 2009-06 0079c4b0  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c4b0
//
// 0079c4b0  56                   push esi
// 0079c4b1  8bf1                 mov esi, ecx
// 0079c4b3  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0079c4ba  7414                 je 0x79c4d0
// 0079c4bc  6811100000           push 0x1011
// 0079c4c1  e88a59f8ff           call 0x721e50
// 0079c4c6  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 0079c4d0  8b442408             mov eax, dword ptr [esp + 8]
// 0079c4d4  50                   push eax
// 0079c4d5  8bce                 mov ecx, esi
// 0079c4d7  e8a442fcff           call 0x760780
// 0079c4dc  5e                   pop esi
// 0079c4dd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnSetPopup@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
