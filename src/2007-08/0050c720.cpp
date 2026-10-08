// from server: 100% by auto
// roc 2007-08 0050c720  unit: G3D::BinaryInput  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c720
//
// 0050c720  83ec0c               sub esp, 0xc
// 0050c723  53                   push ebx
// 0050c724  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0050c72a  56                   push esi
// 0050c72b  8bf1                 mov esi, ecx
// 0050c72d  833e00               cmp dword ptr [esi], 0
// 0050c730  8b4604               mov eax, dword ptr [esi + 4]
// 0050c733  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050c736  57                   push edi
// 0050c737  89442410             mov dword ptr [esp + 0x10], eax
// 0050c73b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c73f  7502                 jne 0x50c743
// 0050c741  ffd3                 call ebx
// 0050c743  8b442420             mov eax, dword ptr [esp + 0x20]
// 0050c747  8b16                 mov edx, dword ptr [esi]
// 0050c749  f7d8                 neg eax
// 0050c74b  50                   push eax
// 0050c74c  8d4c2410             lea ecx, [esp + 0x10]
// 0050c750  89542410             mov dword ptr [esp + 0x10], edx
// 0050c754  e887fdffff           call 0x50c4e0
// 0050c759  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0050c75d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050c761  85ff                 test edi, edi
// 0050c763  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050c767  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050c76b  c70600000000         mov dword ptr [esi], 0
// 0050c771  894e04               mov dword ptr [esi + 4], ecx
// 0050c774  895608               mov dword ptr [esi + 8], edx
// 0050c777  7502                 jne 0x50c77b
// 0050c779  ffd3                 call ebx
// 0050c77b  893e                 mov dword ptr [esi], edi
// 0050c77d  5f                   pop edi
// 0050c77e  8bc6                 mov eax, esi
// 0050c780  5e                   pop esi
// 0050c781  5b                   pop ebx
// 0050c782  83c40c               add esp, 0xc
// 0050c785  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??G?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@QBE?AV01@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
