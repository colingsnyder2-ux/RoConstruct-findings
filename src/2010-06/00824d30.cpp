// roc 2010-06 00824d30  unit: CXTPControlComboBoxGalleryPopupBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824d30
//
// 00824d30  56                   push esi
// 00824d31  8bf1                 mov esi, ecx
// 00824d33  57                   push edi
// 00824d34  6a01                 push 1
// 00824d36  8d4e20               lea ecx, [esi + 0x20]
// 00824d39  c706bc50a600         mov dword ptr [esi], 0xa650bc
// 00824d3f  e8fca9ffff           call 0x81f740
// 00824d44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00824d48  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 00824d4e  6a15                 push 0x15
// 00824d50  89462c               mov dword ptr [esi + 0x2c], eax
// 00824d53  ffd7                 call edi
// 00824d55  6a03                 push 3
// 00824d57  894604               mov dword ptr [esi + 4], eax
// 00824d5a  ffd7                 call edi
// 00824d5c  6a02                 push 2
// 00824d5e  894608               mov dword ptr [esi + 8], eax
// 00824d61  ffd7                 call edi
// 00824d63  6a14                 push 0x14
// 00824d65  894610               mov dword ptr [esi + 0x10], eax
// 00824d68  ffd7                 call edi
// 00824d6a  89460c               mov dword ptr [esi + 0xc], eax
// 00824d6d  b813000000           mov eax, 0x13
// 00824d72  894618               mov dword ptr [esi + 0x18], eax
// 00824d75  894614               mov dword ptr [esi + 0x14], eax
// 00824d78  5f                   pop edi
// 00824d79  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 00824d80  8bc6                 mov eax, esi
// 00824d82  5e                   pop esi
// 00824d83  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ??0CXTPControlGalleryPaintManager@@QAE@PAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
