// from server: 100% by auto
// roc 2008-06 0072de20  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072de20
//
// 0072de20  56                   push esi
// 0072de21  8bf1                 mov esi, ecx
// 0072de23  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0072de2a  7414                 je 0x72de40
// 0072de2c  6811100000           push 0x1011
// 0072de31  e80af9f7ff           call 0x6ad740
// 0072de36  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 0072de40  8b442408             mov eax, dword ptr [esp + 8]
// 0072de44  50                   push eax
// 0072de45  8bce                 mov ecx, esi
// 0072de47  e814a0fbff           call 0x6e7e60
// 0072de4c  5e                   pop esi
// 0072de4d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?OnSetPopup@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
