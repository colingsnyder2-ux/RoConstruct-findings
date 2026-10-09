// roc 2007-03 0069fd10  unit: seg_00690000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069fd10
//
// 0069fd10  56                   push esi
// 0069fd11  57                   push edi
// 0069fd12  8b3dbced7700         mov edi, dword ptr [0x77edbc]
// 0069fd18  6a15                 push 0x15
// 0069fd1a  8bf1                 mov esi, ecx
// 0069fd1c  ffd7                 call edi
// 0069fd1e  6a03                 push 3
// 0069fd20  894604               mov dword ptr [esi + 4], eax
// 0069fd23  ffd7                 call edi
// 0069fd25  6a02                 push 2
// 0069fd27  894608               mov dword ptr [esi + 8], eax
// 0069fd2a  ffd7                 call edi
// 0069fd2c  6a14                 push 0x14
// 0069fd2e  894610               mov dword ptr [esi + 0x10], eax
// 0069fd31  ffd7                 call edi
// 0069fd33  68e02e7d00           push 0x7d2ee0
// 0069fd38  6a00                 push 0
// 0069fd3a  8d4e20               lea ecx, [esi + 0x20]
// 0069fd3d  89460c               mov dword ptr [esi + 0xc], eax
// 0069fd40  e8cbb1feff           call 0x68af10
// 0069fd45  b813000000           mov eax, 0x13
// 0069fd4a  5f                   pop edi
// 0069fd4b  894618               mov dword ptr [esi + 0x18], eax
// 0069fd4e  894614               mov dword ptr [esi + 0x14], eax
// 0069fd51  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 0069fd58  5e                   pop esi
// 0069fd59  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
