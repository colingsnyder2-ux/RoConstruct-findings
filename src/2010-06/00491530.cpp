// roc 2010-06 00491530  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491530
//
// 00491530  56                   push esi
// 00491531  57                   push edi
// 00491532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00491536  8bf1                 mov esi, ecx
// 00491538  ff4678               inc dword ptr [esi + 0x78]
// 0049153b  83ff08               cmp edi, 8
// 0049153e  0f8484000000         je 0x4915c8
// 00491544  39be1c040000         cmp dword ptr [esi + 0x41c], edi
// 0049154a  747c                 je 0x4915c8
// 0049154c  68900b0000           push 0xb90
// 00491551  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 00491557  83ff06               cmp edi, 6
// 0049155a  7557                 jne 0x4915b3
// 0049155c  b802000000           mov eax, 2
// 00491561  398628040000         cmp dword ptr [esi + 0x428], eax
// 00491567  7559                 jne 0x4915c2
// 00491569  39862c040000         cmp dword ptr [esi + 0x42c], eax
// 0049156f  7551                 jne 0x4915c2
// 00491571  398630040000         cmp dword ptr [esi + 0x430], eax
// 00491577  7549                 jne 0x4915c2
// 00491579  803dbf38c00000       cmp byte ptr [0xc038bf], 0
// 00491580  7418                 je 0x49159a
// 00491582  398634040000         cmp dword ptr [esi + 0x434], eax
// 00491588  7538                 jne 0x4915c2
// 0049158a  398638040000         cmp dword ptr [esi + 0x438], eax
// 00491590  7530                 jne 0x4915c2
// 00491592  39863c040000         cmp dword ptr [esi + 0x43c], eax
// 00491598  7528                 jne 0x4915c2
// 0049159a  ff4670               inc dword ptr [esi + 0x70]
// 0049159d  68900b0000           push 0xb90
// 004915a2  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 004915a8  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 004915ae  5f                   pop edi
// 004915af  5e                   pop esi
// 004915b0  c20400               ret 4
// 004915b3  8b8620040000         mov eax, dword ptr [esi + 0x420]
// 004915b9  50                   push eax
// 004915ba  57                   push edi
// 004915bb  8bce                 mov ecx, esi
// 004915bd  e8aefeffff           call 0x491470
// 004915c2  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 004915c8  5f                   pop edi
// 004915c9  5e                   pop esi
// 004915ca  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilTest@RenderDevice@G3D@@QAEXW4StencilTest@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
