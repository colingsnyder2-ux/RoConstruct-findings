// roc 2012-06 009fa3d0  unit: CXTPControlComboBoxGalleryPopupBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa3d0
//
// 009fa3d0  56                   push esi
// 009fa3d1  8bf1                 mov esi, ecx
// 009fa3d3  57                   push edi
// 009fa3d4  6a01                 push 1
// 009fa3d6  8d4e20               lea ecx, [esi + 0x20]
// 009fa3d9  c70694b1c100         mov dword ptr [esi], 0xc1b194
// 009fa3df  e8bcb0ffff           call 0x9f54a0
// 009fa3e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009fa3e8  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 009fa3ee  6a15                 push 0x15
// 009fa3f0  89462c               mov dword ptr [esi + 0x2c], eax
// 009fa3f3  ffd7                 call edi
// 009fa3f5  6a03                 push 3
// 009fa3f7  894604               mov dword ptr [esi + 4], eax
// 009fa3fa  ffd7                 call edi
// 009fa3fc  6a02                 push 2
// 009fa3fe  894608               mov dword ptr [esi + 8], eax
// 009fa401  ffd7                 call edi
// 009fa403  6a14                 push 0x14
// 009fa405  894610               mov dword ptr [esi + 0x10], eax
// 009fa408  ffd7                 call edi
// 009fa40a  89460c               mov dword ptr [esi + 0xc], eax
// 009fa40d  b813000000           mov eax, 0x13
// 009fa412  894618               mov dword ptr [esi + 0x18], eax
// 009fa415  894614               mov dword ptr [esi + 0x14], eax
// 009fa418  5f                   pop edi
// 009fa419  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 009fa420  8bc6                 mov eax, esi
// 009fa422  5e                   pop esi
// 009fa423  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ??0CXTPControlGalleryPaintManager@@QAE@PAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
