// roc 2007-08 00473c30  unit: G3D::VARArea  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473c30
//
// 00473c30  56                   push esi
// 00473c31  57                   push edi
// 00473c32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473c36  8bf1                 mov esi, ecx
// 00473c38  83467801             add dword ptr [esi + 0x78], 1
// 00473c3c  83ff08               cmp edi, 8
// 00473c3f  0f8485000000         je 0x473cca
// 00473c45  39be1c040000         cmp dword ptr [esi + 0x41c], edi
// 00473c4b  747d                 je 0x473cca
// 00473c4d  68900b0000           push 0xb90
// 00473c52  ff1554eb7700         call dword ptr [0x77eb54]
// 00473c58  83ff06               cmp edi, 6
// 00473c5b  7558                 jne 0x473cb5
// 00473c5d  b802000000           mov eax, 2
// 00473c62  398628040000         cmp dword ptr [esi + 0x428], eax
// 00473c68  755a                 jne 0x473cc4
// 00473c6a  39862c040000         cmp dword ptr [esi + 0x42c], eax
// 00473c70  7552                 jne 0x473cc4
// 00473c72  398630040000         cmp dword ptr [esi + 0x430], eax
// 00473c78  754a                 jne 0x473cc4
// 00473c7a  803d67cf8b0000       cmp byte ptr [0x8bcf67], 0
// 00473c81  7418                 je 0x473c9b
// 00473c83  398634040000         cmp dword ptr [esi + 0x434], eax
// 00473c89  7539                 jne 0x473cc4
// 00473c8b  398638040000         cmp dword ptr [esi + 0x438], eax
// 00473c91  7531                 jne 0x473cc4
// 00473c93  39863c040000         cmp dword ptr [esi + 0x43c], eax
// 00473c99  7529                 jne 0x473cc4
// 00473c9b  83467001             add dword ptr [esi + 0x70], 1
// 00473c9f  68900b0000           push 0xb90
// 00473ca4  ff154ceb7700         call dword ptr [0x77eb4c]
// 00473caa  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 00473cb0  5f                   pop edi
// 00473cb1  5e                   pop esi
// 00473cb2  c20400               ret 4
// 00473cb5  8b8620040000         mov eax, dword ptr [esi + 0x420]
// 00473cbb  50                   push eax
// 00473cbc  57                   push edi
// 00473cbd  8bce                 mov ecx, esi
// 00473cbf  e8acfeffff           call 0x473b70
// 00473cc4  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 00473cca  5f                   pop edi
// 00473ccb  5e                   pop esi
// 00473ccc  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilTest@RenderDevice@G3D@@QAEXW4StencilTest@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
