// roc 2009-06 0049e660  unit: G3D::VARArea  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e660
//
// 0049e660  56                   push esi
// 0049e661  57                   push edi
// 0049e662  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049e666  8bf1                 mov esi, ecx
// 0049e668  ff4678               inc dword ptr [esi + 0x78]
// 0049e66b  83ff08               cmp edi, 8
// 0049e66e  0f8484000000         je 0x49e6f8
// 0049e674  39be1c040000         cmp dword ptr [esi + 0x41c], edi
// 0049e67a  747c                 je 0x49e6f8
// 0049e67c  68900b0000           push 0xb90
// 0049e681  ff15aceb8900         call dword ptr [0x89ebac]
// 0049e687  83ff06               cmp edi, 6
// 0049e68a  7557                 jne 0x49e6e3
// 0049e68c  b802000000           mov eax, 2
// 0049e691  398628040000         cmp dword ptr [esi + 0x428], eax
// 0049e697  7559                 jne 0x49e6f2
// 0049e699  39862c040000         cmp dword ptr [esi + 0x42c], eax
// 0049e69f  7551                 jne 0x49e6f2
// 0049e6a1  398630040000         cmp dword ptr [esi + 0x430], eax
// 0049e6a7  7549                 jne 0x49e6f2
// 0049e6a9  803d13c9a30000       cmp byte ptr [0xa3c913], 0
// 0049e6b0  7418                 je 0x49e6ca
// 0049e6b2  398634040000         cmp dword ptr [esi + 0x434], eax
// 0049e6b8  7538                 jne 0x49e6f2
// 0049e6ba  398638040000         cmp dword ptr [esi + 0x438], eax
// 0049e6c0  7530                 jne 0x49e6f2
// 0049e6c2  39863c040000         cmp dword ptr [esi + 0x43c], eax
// 0049e6c8  7528                 jne 0x49e6f2
// 0049e6ca  ff4670               inc dword ptr [esi + 0x70]
// 0049e6cd  68900b0000           push 0xb90
// 0049e6d2  ff15b8eb8900         call dword ptr [0x89ebb8]
// 0049e6d8  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 0049e6de  5f                   pop edi
// 0049e6df  5e                   pop esi
// 0049e6e0  c20400               ret 4
// 0049e6e3  8b8620040000         mov eax, dword ptr [esi + 0x420]
// 0049e6e9  50                   push eax
// 0049e6ea  57                   push edi
// 0049e6eb  8bce                 mov ecx, esi
// 0049e6ed  e8aefeffff           call 0x49e5a0
// 0049e6f2  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 0049e6f8  5f                   pop edi
// 0049e6f9  5e                   pop esi
// 0049e6fa  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilTest@RenderDevice@G3D@@QAEXW4StencilTest@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
