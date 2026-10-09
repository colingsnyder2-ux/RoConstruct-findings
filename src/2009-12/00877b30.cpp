// roc 2009-12 00877b30  unit: CXTPControlComboBoxGalleryPopupBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877b30
//
// 00877b30  56                   push esi
// 00877b31  8bf1                 mov esi, ecx
// 00877b33  57                   push edi
// 00877b34  6a01                 push 1
// 00877b36  8d4e20               lea ecx, [esi + 0x20]
// 00877b39  c7060419a000         mov dword ptr [esi], 0xa01904
// 00877b3f  e8fc3bffff           call 0x86b740
// 00877b44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00877b48  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 00877b4e  6a15                 push 0x15
// 00877b50  89462c               mov dword ptr [esi + 0x2c], eax
// 00877b53  ffd7                 call edi
// 00877b55  6a03                 push 3
// 00877b57  894604               mov dword ptr [esi + 4], eax
// 00877b5a  ffd7                 call edi
// 00877b5c  6a02                 push 2
// 00877b5e  894608               mov dword ptr [esi + 8], eax
// 00877b61  ffd7                 call edi
// 00877b63  6a14                 push 0x14
// 00877b65  894610               mov dword ptr [esi + 0x10], eax
// 00877b68  ffd7                 call edi
// 00877b6a  89460c               mov dword ptr [esi + 0xc], eax
// 00877b6d  b813000000           mov eax, 0x13
// 00877b72  894618               mov dword ptr [esi + 0x18], eax
// 00877b75  894614               mov dword ptr [esi + 0x14], eax
// 00877b78  5f                   pop edi
// 00877b79  c7461c10000000       mov dword ptr [esi + 0x1c], 0x10
// 00877b80  8bc6                 mov eax, esi
// 00877b82  5e                   pop esi
// 00877b83  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ??0CXTPControlGalleryPaintManager@@QAE@PAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
