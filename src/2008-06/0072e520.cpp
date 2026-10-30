// from server: 100% by auto
// roc 2008-06 0072e520  unit: CXTPControlComboBoxGalleryPopupBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e520
//
// 0072e520  56                   push esi
// 0072e521  8bf1                 mov esi, ecx
// 0072e523  57                   push edi
// 0072e524  6a01                 push 1
// 0072e526  8d4e20               lea ecx, [esi + 0x20]
// 0072e529  c706e4218600         mov dword ptr [esi], 0x8621e4
// 0072e52f  e87c9afeff           call 0x717fb0
// 0072e534  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072e538  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 0072e53e  6a15                 push 0x15
// 0072e540  89462c               mov dword ptr [esi + 0x2c], eax
// 0072e543  ffd7                 call edi
// 0072e545  6a03                 push 3
// 0072e547  894604               mov dword ptr [esi + 4], eax
// 0072e54a  ffd7                 call edi
// 0072e54c  6a02                 push 2
// 0072e54e  894608               mov dword ptr [esi + 8], eax
// 0072e551  ffd7                 call edi
// 0072e553  6a14                 push 0x14
// 0072e555  894610               mov dword ptr [esi + 0x10], eax
// 0072e558  ffd7                 call edi
// 0072e55a  89460c               mov dword ptr [esi + 0xc], eax
// 0072e55d  b813000000           mov eax, 0x13
// 0072e562  894618               mov dword ptr [esi + 0x18], eax
// 0072e565  894614               mov dword ptr [esi + 0x14], eax
// 0072e568  5f                   pop edi
// 0072e569  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 0072e570  8bc6                 mov eax, esi
// 0072e572  5e                   pop esi
// 0072e573  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ??0CXTPControlGalleryPaintManager@@QAE@PAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
