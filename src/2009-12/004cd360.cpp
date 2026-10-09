// roc 2009-12 004cd360  unit: G3D::VARArea  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd360
//
// 004cd360  803dbcd0b70000       cmp byte ptr [0xb7d0bc], 0
// 004cd367  56                   push esi
// 004cd368  8bf1                 mov esi, ecx
// 004cd36a  740d                 je 0x4cd379
// 004cd36c  6a00                 push 0
// 004cd36e  6892880000           push 0x8892
// 004cd373  ff15f4d9b700         call dword ptr [0xb7d9f4]
// 004cd379  ff15fcbb9800         call dword ptr [0x98bbfc]
// 004cd37f  c6861201000000       mov byte ptr [esi + 0x112], 0
// 004cd386  8b4638               mov eax, dword ptr [esi + 0x38]
// 004cd389  85c0                 test eax, eax
// 004cd38b  742c                 je 0x4cd3b9
// 004cd38d  83c004               add eax, 4
// 004cd390  50                   push eax
// 004cd391  ff1508b29800         call dword ptr [0x98b208]
// 004cd397  85c0                 test eax, eax
// 004cd399  7517                 jne 0x4cd3b2
// 004cd39b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004cd39e  e87ddcf7ff           call 0x44b020
// 004cd3a3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004cd3a6  85c9                 test ecx, ecx
// 004cd3a8  7408                 je 0x4cd3b2
// 004cd3aa  8b01                 mov eax, dword ptr [ecx]
// 004cd3ac  8b10                 mov edx, dword ptr [eax]
// 004cd3ae  6a01                 push 1
// 004cd3b0  ffd2                 call edx
// 004cd3b2  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004cd3b9  5e                   pop esi
// 004cd3ba  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
