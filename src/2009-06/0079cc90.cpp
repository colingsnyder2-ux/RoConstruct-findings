// roc 2009-06 0079cc90  unit: CXTPControlGalleryPaintManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079cc90
//
// 0079cc90  56                   push esi
// 0079cc91  57                   push edi
// 0079cc92  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 0079cc98  6a15                 push 0x15
// 0079cc9a  8bf1                 mov esi, ecx
// 0079cc9c  ffd7                 call edi
// 0079cc9e  6a03                 push 3
// 0079cca0  894604               mov dword ptr [esi + 4], eax
// 0079cca3  ffd7                 call edi
// 0079cca5  6a02                 push 2
// 0079cca7  894608               mov dword ptr [esi + 8], eax
// 0079ccaa  ffd7                 call edi
// 0079ccac  6a14                 push 0x14
// 0079ccae  894610               mov dword ptr [esi + 0x10], eax
// 0079ccb1  ffd7                 call edi
// 0079ccb3  6890149000           push 0x901490
// 0079ccb8  6a00                 push 0
// 0079ccba  8d4e20               lea ecx, [esi + 0x20]
// 0079ccbd  89460c               mov dword ptr [esi + 0xc], eax
// 0079ccc0  e81b40ffff           call 0x790ce0
// 0079ccc5  b813000000           mov eax, 0x13
// 0079ccca  5f                   pop edi
// 0079cccb  894618               mov dword ptr [esi + 0x18], eax
// 0079ccce  894614               mov dword ptr [esi + 0x14], eax
// 0079ccd1  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 0079ccd8  5e                   pop esi
// 0079ccd9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RefreshMetrics@CXTPControlGalleryPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
