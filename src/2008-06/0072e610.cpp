// from server: 100% by auto
// roc 2008-06 0072e610  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e610
//
// 0072e610  56                   push esi
// 0072e611  57                   push edi
// 0072e612  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 0072e618  6a15                 push 0x15
// 0072e61a  8bf1                 mov esi, ecx
// 0072e61c  ffd7                 call edi
// 0072e61e  6a03                 push 3
// 0072e620  894604               mov dword ptr [esi + 4], eax
// 0072e623  ffd7                 call edi
// 0072e625  6a02                 push 2
// 0072e627  894608               mov dword ptr [esi + 8], eax
// 0072e62a  ffd7                 call edi
// 0072e62c  6a14                 push 0x14
// 0072e62e  894610               mov dword ptr [esi + 0x10], eax
// 0072e631  ffd7                 call edi
// 0072e633  68f8218600           push 0x8621f8
// 0072e638  6a00                 push 0
// 0072e63a  8d4e20               lea ecx, [esi + 0x20]
// 0072e63d  89460c               mov dword ptr [esi + 0xc], eax
// 0072e640  e82b9ffeff           call 0x718570
// 0072e645  b813000000           mov eax, 0x13
// 0072e64a  5f                   pop edi
// 0072e64b  894618               mov dword ptr [esi + 0x18], eax
// 0072e64e  894614               mov dword ptr [esi + 0x14], eax
// 0072e651  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 0072e658  5e                   pop esi
// 0072e659  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
