// from server: 100% by auto
// roc 2007-08 0050c3d0  unit: G3D::BinaryInput  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c3d0
//
// 0050c3d0  53                   push ebx
// 0050c3d1  55                   push ebp
// 0050c3d2  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050c3d8  56                   push esi
// 0050c3d9  57                   push edi
// 0050c3da  8bf9                 mov edi, ecx
// 0050c3dc  8b5f08               mov ebx, dword ptr [edi + 8]
// 0050c3df  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 0050c3e2  7602                 jbe 0x50c3e6
// 0050c3e4  ffd5                 call ebp
// 0050c3e6  85ff                 test edi, edi
// 0050c3e8  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050c3ec  c70600000000         mov dword ptr [esi], 0
// 0050c3f2  895e04               mov dword ptr [esi + 4], ebx
// 0050c3f5  c7460800000000       mov dword ptr [esi + 8], 0
// 0050c3fc  7502                 jne 0x50c400
// 0050c3fe  ffd5                 call ebp
// 0050c400  893e                 mov dword ptr [esi], edi
// 0050c402  5f                   pop edi
// 0050c403  8bc6                 mov eax, esi
// 0050c405  5e                   pop esi
// 0050c406  5d                   pop ebp
// 0050c407  5b                   pop ebx
// 0050c408  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?begin@?$vector@_NV?$allocator@_N@std@@@std@@QAE?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
