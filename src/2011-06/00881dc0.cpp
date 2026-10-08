// roc 2011-06 00881dc0  unit: CXTPControlComboBoxGalleryPopupBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881dc0
//
// 00881dc0  56                   push esi
// 00881dc1  8bf1                 mov esi, ecx
// 00881dc3  57                   push edi
// 00881dc4  6a01                 push 1
// 00881dc6  8d4e20               lea ecx, [esi + 0x20]
// 00881dc9  c706dcfaac00         mov dword ptr [esi], 0xacfadc
// 00881dcf  e82cb1ffff           call 0x87cf00
// 00881dd4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00881dd8  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00881dde  6a15                 push 0x15
// 00881de0  89462c               mov dword ptr [esi + 0x2c], eax
// 00881de3  ffd7                 call edi
// 00881de5  6a03                 push 3
// 00881de7  894604               mov dword ptr [esi + 4], eax
// 00881dea  ffd7                 call edi
// 00881dec  6a02                 push 2
// 00881dee  894608               mov dword ptr [esi + 8], eax
// 00881df1  ffd7                 call edi
// 00881df3  6a14                 push 0x14
// 00881df5  894610               mov dword ptr [esi + 0x10], eax
// 00881df8  ffd7                 call edi
// 00881dfa  89460c               mov dword ptr [esi + 0xc], eax
// 00881dfd  b813000000           mov eax, 0x13
// 00881e02  894618               mov dword ptr [esi + 0x18], eax
// 00881e05  894614               mov dword ptr [esi + 0x14], eax
// 00881e08  5f                   pop edi
// 00881e09  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 00881e10  8bc6                 mov eax, esi
// 00881e12  5e                   pop esi
// 00881e13  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ??0CXTPControlGalleryPaintManager@@QAE@PAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
