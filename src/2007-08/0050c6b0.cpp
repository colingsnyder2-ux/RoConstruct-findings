// roc 2007-08 0050c6b0  unit: G3D::BinaryInput  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c6b0
//
// 0050c6b0  83ec0c               sub esp, 0xc
// 0050c6b3  53                   push ebx
// 0050c6b4  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0050c6ba  56                   push esi
// 0050c6bb  8bf1                 mov esi, ecx
// 0050c6bd  833e00               cmp dword ptr [esi], 0
// 0050c6c0  8b4604               mov eax, dword ptr [esi + 4]
// 0050c6c3  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050c6c6  57                   push edi
// 0050c6c7  89442410             mov dword ptr [esp + 0x10], eax
// 0050c6cb  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050c6cf  7502                 jne 0x50c6d3
// 0050c6d1  ffd3                 call ebx
// 0050c6d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0050c6d7  8b16                 mov edx, dword ptr [esi]
// 0050c6d9  50                   push eax
// 0050c6da  8d4c2410             lea ecx, [esp + 0x10]
// 0050c6de  89542410             mov dword ptr [esp + 0x10], edx
// 0050c6e2  e8f9fdffff           call 0x50c4e0
// 0050c6e7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0050c6eb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050c6ef  85ff                 test edi, edi
// 0050c6f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050c6f5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050c6f9  c70600000000         mov dword ptr [esi], 0
// 0050c6ff  894e04               mov dword ptr [esi + 4], ecx
// 0050c702  895608               mov dword ptr [esi + 8], edx
// 0050c705  7502                 jne 0x50c709
// 0050c707  ffd3                 call ebx
// 0050c709  893e                 mov dword ptr [esi], edi
// 0050c70b  5f                   pop edi
// 0050c70c  8bc6                 mov eax, esi
// 0050c70e  5e                   pop esi
// 0050c70f  5b                   pop ebx
// 0050c710  83c40c               add esp, 0xc
// 0050c713  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??H?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@QBE?AV01@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
