// roc 2009-12 005ec560  unit: G3D::Log  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec560
//
// 005ec560  837e1800             cmp dword ptr [esi + 0x18], 0
// 005ec564  7528                 jne 0x5ec58e
// 005ec566  8b4604               mov eax, dword ptr [esi + 4]
// 005ec569  8b08                 mov ecx, dword ptr [eax]
// 005ec56b  57                   push edi
// 005ec56c  6a2c                 push 0x2c
// 005ec56e  6a00                 push 0
// 005ec570  56                   push esi
// 005ec571  ffd1                 call ecx
// 005ec573  8b5604               mov edx, dword ptr [esi + 4]
// 005ec576  8bf8                 mov edi, eax
// 005ec578  6800100000           push 0x1000
// 005ec57d  897e18               mov dword ptr [esi + 0x18], edi
// 005ec580  8b02                 mov eax, dword ptr [edx]
// 005ec582  6a00                 push 0
// 005ec584  56                   push esi
// 005ec585  ffd0                 call eax
// 005ec587  83c418               add esp, 0x18
// 005ec58a  894728               mov dword ptr [edi + 0x28], eax
// 005ec58d  5f                   pop edi
// 005ec58e  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ec591  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec595  8b542408             mov edx, dword ptr [esp + 8]
// 005ec599  c7400890c45e00       mov dword ptr [eax + 8], 0x5ec490
// 005ec5a0  c7400ca0c45e00       mov dword ptr [eax + 0xc], 0x5ec4a0
// 005ec5a7  c74010f0c45e00       mov dword ptr [eax + 0x10], 0x5ec4f0
// 005ec5ae  c74014200c6000       mov dword ptr [eax + 0x14], 0x600c20
// 005ec5b5  c74018904a8500       mov dword ptr [eax + 0x18], 0x854a90
// 005ec5bc  894820               mov dword ptr [eax + 0x20], ecx
// 005ec5bf  89501c               mov dword ptr [eax + 0x1c], edx
// 005ec5c2  c7400400000000       mov dword ptr [eax + 4], 0
// 005ec5c9  c70000000000         mov dword ptr [eax], 0
// 005ec5cf  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
