// roc 2012-06 009fa4c0  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa4c0
//
// 009fa4c0  56                   push esi
// 009fa4c1  57                   push edi
// 009fa4c2  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 009fa4c8  6a15                 push 0x15
// 009fa4ca  8bf1                 mov esi, ecx
// 009fa4cc  ffd7                 call edi
// 009fa4ce  6a03                 push 3
// 009fa4d0  894604               mov dword ptr [esi + 4], eax
// 009fa4d3  ffd7                 call edi
// 009fa4d5  6a02                 push 2
// 009fa4d7  894608               mov dword ptr [esi + 8], eax
// 009fa4da  ffd7                 call edi
// 009fa4dc  6a14                 push 0x14
// 009fa4de  894610               mov dword ptr [esi + 0x10], eax
// 009fa4e1  ffd7                 call edi
// 009fa4e3  68a8b1c100           push 0xc1b1a8
// 009fa4e8  6a00                 push 0
// 009fa4ea  8d4e20               lea ecx, [esi + 0x20]
// 009fa4ed  89460c               mov dword ptr [esi + 0xc], eax
// 009fa4f0  e8bbb4ffff           call 0x9f59b0
// 009fa4f5  b813000000           mov eax, 0x13
// 009fa4fa  5f                   pop edi
// 009fa4fb  894618               mov dword ptr [esi + 0x18], eax
// 009fa4fe  894614               mov dword ptr [esi + 0x14], eax
// 009fa501  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 009fa508  5e                   pop esi
// 009fa509  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
