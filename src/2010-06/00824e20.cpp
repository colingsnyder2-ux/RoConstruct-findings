// roc 2010-06 00824e20  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824e20
//
// 00824e20  56                   push esi
// 00824e21  57                   push edi
// 00824e22  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 00824e28  6a15                 push 0x15
// 00824e2a  8bf1                 mov esi, ecx
// 00824e2c  ffd7                 call edi
// 00824e2e  6a03                 push 3
// 00824e30  894604               mov dword ptr [esi + 4], eax
// 00824e33  ffd7                 call edi
// 00824e35  6a02                 push 2
// 00824e37  894608               mov dword ptr [esi + 8], eax
// 00824e3a  ffd7                 call edi
// 00824e3c  6a14                 push 0x14
// 00824e3e  894610               mov dword ptr [esi + 0x10], eax
// 00824e41  ffd7                 call edi
// 00824e43  68d050a600           push 0xa650d0
// 00824e48  6a00                 push 0
// 00824e4a  8d4e20               lea ecx, [esi + 0x20]
// 00824e4d  89460c               mov dword ptr [esi + 0xc], eax
// 00824e50  e8abaeffff           call 0x81fd00
// 00824e55  b813000000           mov eax, 0x13
// 00824e5a  5f                   pop edi
// 00824e5b  894618               mov dword ptr [esi + 0x18], eax
// 00824e5e  894614               mov dword ptr [esi + 0x14], eax
// 00824e61  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 00824e68  5e                   pop esi
// 00824e69  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
