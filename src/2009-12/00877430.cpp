// roc 2009-12 00877430  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877430
//
// 00877430  56                   push esi
// 00877431  8bf1                 mov esi, ecx
// 00877433  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087743a  7414                 je 0x877450
// 0087743c  6811100000           push 0x1011
// 00877441  e84a11f8ff           call 0x7f8590
// 00877446  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 00877450  8b442408             mov eax, dword ptr [esp + 8]
// 00877454  50                   push eax
// 00877455  8bce                 mov ecx, esi
// 00877457  e8f440fcff           call 0x83b550
// 0087745c  5e                   pop esi
// 0087745d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnSetPopup@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
