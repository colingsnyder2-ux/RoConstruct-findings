// roc 2009-06 0079cba0  unit: CXTPControlComboBoxGalleryPopupBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079cba0
//
// 0079cba0  56                   push esi
// 0079cba1  8bf1                 mov esi, ecx
// 0079cba3  57                   push edi
// 0079cba4  6a01                 push 1
// 0079cba6  8d4e20               lea ecx, [esi + 0x20]
// 0079cba9  c7067c149000         mov dword ptr [esi], 0x90147c
// 0079cbaf  e86c3bffff           call 0x790720
// 0079cbb4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079cbb8  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 0079cbbe  6a15                 push 0x15
// 0079cbc0  89462c               mov dword ptr [esi + 0x2c], eax
// 0079cbc3  ffd7                 call edi
// 0079cbc5  6a03                 push 3
// 0079cbc7  894604               mov dword ptr [esi + 4], eax
// 0079cbca  ffd7                 call edi
// 0079cbcc  6a02                 push 2
// 0079cbce  894608               mov dword ptr [esi + 8], eax
// 0079cbd1  ffd7                 call edi
// 0079cbd3  6a14                 push 0x14
// 0079cbd5  894610               mov dword ptr [esi + 0x10], eax
// 0079cbd8  ffd7                 call edi
// 0079cbda  89460c               mov dword ptr [esi + 0xc], eax
// 0079cbdd  b813000000           mov eax, 0x13
// 0079cbe2  894618               mov dword ptr [esi + 0x18], eax
// 0079cbe5  894614               mov dword ptr [esi + 0x14], eax
// 0079cbe8  5f                   pop edi
// 0079cbe9  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 0079cbf0  8bc6                 mov eax, esi
// 0079cbf2  5e                   pop esi
// 0079cbf3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ??0CXTPControlGalleryPaintManager@@QAE@PAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
