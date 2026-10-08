// roc 2009-12 005ec310  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec310
//
// 005ec310  56                   push esi
// 005ec311  8bf1                 mov esi, ecx
// 005ec313  8b4644               mov eax, dword ptr [esi + 0x44]
// 005ec316  8d4801               lea ecx, [eax + 1]
// 005ec319  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005ec31c  7e0f                 jle 0x5ec32d
// 005ec31e  8b5634               mov edx, dword ptr [esi + 0x34]
// 005ec321  6a01                 push 1
// 005ec323  03d0                 add edx, eax
// 005ec325  52                   push edx
// 005ec326  8bce                 mov ecx, esi
// 005ec328  e8938e0000           call 0x5f51c0
// 005ec32d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005ec330  8b4640               mov eax, dword ptr [esi + 0x40]
// 005ec333  8a0401               mov al, byte ptr [ecx + eax]
// 005ec336  41                   inc ecx
// 005ec337  894e44               mov dword ptr [esi + 0x44], ecx
// 005ec33a  5e                   pop esi
// 005ec33b  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readInt8@BinaryInput@G3D@@QAECXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
