// roc 2009-12 00877c20  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877c20
//
// 00877c20  56                   push esi
// 00877c21  57                   push edi
// 00877c22  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 00877c28  6a15                 push 0x15
// 00877c2a  8bf1                 mov esi, ecx
// 00877c2c  ffd7                 call edi
// 00877c2e  6a03                 push 3
// 00877c30  894604               mov dword ptr [esi + 4], eax
// 00877c33  ffd7                 call edi
// 00877c35  6a02                 push 2
// 00877c37  894608               mov dword ptr [esi + 8], eax
// 00877c3a  ffd7                 call edi
// 00877c3c  6a14                 push 0x14
// 00877c3e  894610               mov dword ptr [esi + 0x10], eax
// 00877c41  ffd7                 call edi
// 00877c43  681819a000           push 0xa01918
// 00877c48  6a00                 push 0
// 00877c4a  8d4e20               lea ecx, [esi + 0x20]
// 00877c4d  89460c               mov dword ptr [esi + 0xc], eax
// 00877c50  e8ab40ffff           call 0x86bd00
// 00877c55  b813000000           mov eax, 0x13
// 00877c5a  5f                   pop edi
// 00877c5b  894618               mov dword ptr [esi + 0x18], eax
// 00877c5e  894614               mov dword ptr [esi + 0x14], eax
// 00877c61  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 00877c68  5e                   pop esi
// 00877c69  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
