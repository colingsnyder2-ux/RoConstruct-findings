// roc 2009-06 004a0b80  unit: G3D::VARArea  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0b80
//
// 004a0b80  803d0cc9a30000       cmp byte ptr [0xa3c90c], 0
// 004a0b87  56                   push esi
// 004a0b88  8bf1                 mov esi, ecx
// 004a0b8a  740d                 je 0x4a0b99
// 004a0b8c  6a00                 push 0
// 004a0b8e  6892880000           push 0x8892
// 004a0b93  ff1544d2a300         call dword ptr [0xa3d244]
// 004a0b99  ff1554eb8900         call dword ptr [0x89eb54]
// 004a0b9f  c6861201000000       mov byte ptr [esi + 0x112], 0
// 004a0ba6  8b4638               mov eax, dword ptr [esi + 0x38]
// 004a0ba9  85c0                 test eax, eax
// 004a0bab  742c                 je 0x4a0bd9
// 004a0bad  83c004               add eax, 4
// 004a0bb0  50                   push eax
// 004a0bb1  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a0bb7  85c0                 test eax, eax
// 004a0bb9  7517                 jne 0x4a0bd2
// 004a0bbb  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004a0bbe  e8bd41faff           call 0x444d80
// 004a0bc3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004a0bc6  85c9                 test ecx, ecx
// 004a0bc8  7408                 je 0x4a0bd2
// 004a0bca  8b01                 mov eax, dword ptr [ecx]
// 004a0bcc  8b10                 mov edx, dword ptr [eax]
// 004a0bce  6a01                 push 1
// 004a0bd0  ffd2                 call edx
// 004a0bd2  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004a0bd9  5e                   pop esi
// 004a0bda  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
