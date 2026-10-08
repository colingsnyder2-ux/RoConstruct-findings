// roc 2011-06 00881eb0  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881eb0
//
// 00881eb0  56                   push esi
// 00881eb1  57                   push edi
// 00881eb2  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00881eb8  6a15                 push 0x15
// 00881eba  8bf1                 mov esi, ecx
// 00881ebc  ffd7                 call edi
// 00881ebe  6a03                 push 3
// 00881ec0  894604               mov dword ptr [esi + 4], eax
// 00881ec3  ffd7                 call edi
// 00881ec5  6a02                 push 2
// 00881ec7  894608               mov dword ptr [esi + 8], eax
// 00881eca  ffd7                 call edi
// 00881ecc  6a14                 push 0x14
// 00881ece  894610               mov dword ptr [esi + 0x10], eax
// 00881ed1  ffd7                 call edi
// 00881ed3  68f0faac00           push 0xacfaf0
// 00881ed8  6a00                 push 0
// 00881eda  8d4e20               lea ecx, [esi + 0x20]
// 00881edd  89460c               mov dword ptr [esi + 0xc], eax
// 00881ee0  e82bb5ffff           call 0x87d410
// 00881ee5  b813000000           mov eax, 0x13
// 00881eea  5f                   pop edi
// 00881eeb  894618               mov dword ptr [esi + 0x18], eax
// 00881eee  894614               mov dword ptr [esi + 0x14], eax
// 00881ef1  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 00881ef8  5e                   pop esi
// 00881ef9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
