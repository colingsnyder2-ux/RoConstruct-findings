// roc 2007-08 0050c790  unit: G3D::BinaryInput  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c790
//
// 0050c790  83ec18               sub esp, 0x18
// 0050c793  53                   push ebx
// 0050c794  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0050c79a  56                   push esi
// 0050c79b  8bf1                 mov esi, ecx
// 0050c79d  57                   push edi
// 0050c79e  8b7e08               mov edi, dword ptr [esi + 8]
// 0050c7a1  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050c7a4  7602                 jbe 0x50c7a8
// 0050c7a6  ffd3                 call ebx
// 0050c7a8  85f6                 test esi, esi
// 0050c7aa  897c2410             mov dword ptr [esp + 0x10], edi
// 0050c7ae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050c7b6  7502                 jne 0x50c7ba
// 0050c7b8  ffd3                 call ebx
// 0050c7ba  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0050c7be  50                   push eax
// 0050c7bf  8d4c241c             lea ecx, [esp + 0x1c]
// 0050c7c3  51                   push ecx
// 0050c7c4  8d4c2414             lea ecx, [esp + 0x14]
// 0050c7c8  89742414             mov dword ptr [esp + 0x14], esi
// 0050c7cc  e8dffeffff           call 0x50c6b0
// 0050c7d1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0050c7d5  8bf0                 mov esi, eax
// 0050c7d7  833e00               cmp dword ptr [esi], 0
// 0050c7da  8b5604               mov edx, dword ptr [esi + 4]
// 0050c7dd  8b4608               mov eax, dword ptr [esi + 8]
// 0050c7e0  c70700000000         mov dword ptr [edi], 0
// 0050c7e6  895704               mov dword ptr [edi + 4], edx
// 0050c7e9  894708               mov dword ptr [edi + 8], eax
// 0050c7ec  7502                 jne 0x50c7f0
// 0050c7ee  ffd3                 call ebx
// 0050c7f0  8b0e                 mov ecx, dword ptr [esi]
// 0050c7f2  890f                 mov dword ptr [edi], ecx
// 0050c7f4  8bc7                 mov eax, edi
// 0050c7f6  5f                   pop edi
// 0050c7f7  5e                   pop esi
// 0050c7f8  5b                   pop ebx
// 0050c7f9  83c418               add esp, 0x18
// 0050c7fc  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??A?$vector@_NV?$allocator@_N@std@@@std@@QAE?AV?$_Vb_reference@V?$vector@_NV?$allocator@_N@std@@@std@@@1@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
