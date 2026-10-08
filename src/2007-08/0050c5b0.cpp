// from server: 100% by auto
// roc 2007-08 0050c5b0  unit: G3D::BinaryInput  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c5b0
//
// 0050c5b0  55                   push ebp
// 0050c5b1  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050c5b7  56                   push esi
// 0050c5b8  8bf1                 mov esi, ecx
// 0050c5ba  833e00               cmp dword ptr [esi], 0
// 0050c5bd  7406                 je 0x50c5c5
// 0050c5bf  837e0400             cmp dword ptr [esi + 4], 0
// 0050c5c3  7502                 jne 0x50c5c7
// 0050c5c5  ffd5                 call ebp
// 0050c5c7  8b06                 mov eax, dword ptr [esi]
// 0050c5c9  53                   push ebx
// 0050c5ca  8b5e08               mov ebx, dword ptr [esi + 8]
// 0050c5cd  83c004               add eax, 4
// 0050c5d0  57                   push edi
// 0050c5d1  8b7804               mov edi, dword ptr [eax + 4]
// 0050c5d4  3b7808               cmp edi, dword ptr [eax + 8]
// 0050c5d7  7602                 jbe 0x50c5db
// 0050c5d9  ffd5                 call ebp
// 0050c5db  8b4604               mov eax, dword ptr [esi + 4]
// 0050c5de  8b0e                 mov ecx, dword ptr [esi]
// 0050c5e0  2bc7                 sub eax, edi
// 0050c5e2  c1f802               sar eax, 2
// 0050c5e5  c1e005               shl eax, 5
// 0050c5e8  03c3                 add eax, ebx
// 0050c5ea  3b01                 cmp eax, dword ptr [ecx]
// 0050c5ec  5f                   pop edi
// 0050c5ed  5b                   pop ebx
// 0050c5ee  7202                 jb 0x50c5f2
// 0050c5f0  ffd5                 call ebp
// 0050c5f2  8b4604               mov eax, dword ptr [esi + 4]
// 0050c5f5  5e                   pop esi
// 0050c5f6  5d                   pop ebp
// 0050c5f7  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Getptr@?$_Vb_reference@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@QBEPAIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
