// roc 2009-12 004cac90  unit: G3D::VARArea  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cac90
//
// 004cac90  56                   push esi
// 004cac91  57                   push edi
// 004cac92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004cac96  8bf1                 mov esi, ecx
// 004cac98  ff4678               inc dword ptr [esi + 0x78]
// 004cac9b  83ff08               cmp edi, 8
// 004cac9e  0f8484000000         je 0x4cad28
// 004caca4  39be1c040000         cmp dword ptr [esi + 0x41c], edi
// 004cacaa  747c                 je 0x4cad28
// 004cacac  68900b0000           push 0xb90
// 004cacb1  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004cacb7  83ff06               cmp edi, 6
// 004cacba  7557                 jne 0x4cad13
// 004cacbc  b802000000           mov eax, 2
// 004cacc1  398628040000         cmp dword ptr [esi + 0x428], eax
// 004cacc7  7559                 jne 0x4cad22
// 004cacc9  39862c040000         cmp dword ptr [esi + 0x42c], eax
// 004caccf  7551                 jne 0x4cad22
// 004cacd1  398630040000         cmp dword ptr [esi + 0x430], eax
// 004cacd7  7549                 jne 0x4cad22
// 004cacd9  803dc3d0b70000       cmp byte ptr [0xb7d0c3], 0
// 004cace0  7418                 je 0x4cacfa
// 004cace2  398634040000         cmp dword ptr [esi + 0x434], eax
// 004cace8  7538                 jne 0x4cad22
// 004cacea  398638040000         cmp dword ptr [esi + 0x438], eax
// 004cacf0  7530                 jne 0x4cad22
// 004cacf2  39863c040000         cmp dword ptr [esi + 0x43c], eax
// 004cacf8  7528                 jne 0x4cad22
// 004cacfa  ff4670               inc dword ptr [esi + 0x70]
// 004cacfd  68900b0000           push 0xb90
// 004cad02  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004cad08  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 004cad0e  5f                   pop edi
// 004cad0f  5e                   pop esi
// 004cad10  c20400               ret 4
// 004cad13  8b8620040000         mov eax, dword ptr [esi + 0x420]
// 004cad19  50                   push eax
// 004cad1a  57                   push edi
// 004cad1b  8bce                 mov ecx, esi
// 004cad1d  e8aefeffff           call 0x4cabd0
// 004cad22  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 004cad28  5f                   pop edi
// 004cad29  5e                   pop esi
// 004cad2a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilTest@RenderDevice@G3D@@QAEXW4StencilTest@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
