// roc 2007-08 006b3b60  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3b60
//
// 006b3b60  56                   push esi
// 006b3b61  57                   push edi
// 006b3b62  8b3db8ed7700         mov edi, dword ptr [0x77edb8]
// 006b3b68  6a15                 push 0x15
// 006b3b6a  8bf1                 mov esi, ecx
// 006b3b6c  ffd7                 call edi
// 006b3b6e  6a03                 push 3
// 006b3b70  894604               mov dword ptr [esi + 4], eax
// 006b3b73  ffd7                 call edi
// 006b3b75  6a02                 push 2
// 006b3b77  894608               mov dword ptr [esi + 8], eax
// 006b3b7a  ffd7                 call edi
// 006b3b7c  6a14                 push 0x14
// 006b3b7e  894610               mov dword ptr [esi + 0x10], eax
// 006b3b81  ffd7                 call edi
// 006b3b83  6818607d00           push 0x7d6018
// 006b3b88  6a00                 push 0
// 006b3b8a  8d4e20               lea ecx, [esi + 0x20]
// 006b3b8d  89460c               mov dword ptr [esi + 0xc], eax
// 006b3b90  e8bbb1feff           call 0x69ed50
// 006b3b95  b813000000           mov eax, 0x13
// 006b3b9a  5f                   pop edi
// 006b3b9b  894618               mov dword ptr [esi + 0x18], eax
// 006b3b9e  894614               mov dword ptr [esi + 0x14], eax
// 006b3ba1  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 006b3ba8  5e                   pop esi
// 006b3ba9  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
