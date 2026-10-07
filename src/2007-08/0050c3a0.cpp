// roc 2007-08 0050c3a0  unit: G3D::BinaryInput  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c3a0
//
// 0050c3a0  56                   push esi
// 0050c3a1  8bf1                 mov esi, ecx
// 0050c3a3  57                   push edi
// 0050c3a4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050c3a8  c70600000000         mov dword ptr [esi], 0
// 0050c3ae  8b4704               mov eax, dword ptr [edi + 4]
// 0050c3b1  894604               mov dword ptr [esi + 4], eax
// 0050c3b4  8b4f08               mov ecx, dword ptr [edi + 8]
// 0050c3b7  894e08               mov dword ptr [esi + 8], ecx
// 0050c3ba  833f00               cmp dword ptr [edi], 0
// 0050c3bd  7506                 jne 0x50c3c5
// 0050c3bf  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c3c5  8b17                 mov edx, dword ptr [edi]
// 0050c3c7  5f                   pop edi
// 0050c3c8  8916                 mov dword ptr [esi], edx
// 0050c3ca  8bc6                 mov eax, esi
// 0050c3cc  5e                   pop esi
// 0050c3cd  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0?$_Vb_iter_base@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
