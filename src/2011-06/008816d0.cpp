// roc 2011-06 008816d0  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008816d0
//
// 008816d0  56                   push esi
// 008816d1  8bf1                 mov esi, ecx
// 008816d3  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 008816da  7414                 je 0x8816f0
// 008816dc  6811100000           push 0x1011
// 008816e1  e86ad5f8ff           call 0x80ec50
// 008816e6  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 008816f0  8b442408             mov eax, dword ptr [esp + 8]
// 008816f4  50                   push eax
// 008816f5  8bce                 mov ecx, esi
// 008816f7  e8f4f7fcff           call 0x850ef0
// 008816fc  5e                   pop esi
// 008816fd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnSetPopup@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
