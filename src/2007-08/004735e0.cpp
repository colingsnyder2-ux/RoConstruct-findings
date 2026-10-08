// roc 2007-08 004735e0  unit: G3D::VARArea  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004735e0
//
// 004735e0  56                   push esi
// 004735e1  8bf1                 mov esi, ecx
// 004735e3  83467801             add dword ptr [esi + 0x78], 1
// 004735e7  80bea803000000       cmp byte ptr [esi + 0x3a8], 0
// 004735ee  741f                 je 0x47360f
// 004735f0  6a00                 push 0
// 004735f2  68520b0000           push 0xb52
// 004735f7  ff15f8ea7700         call dword ptr [0x77eaf8]
// 004735fd  83467001             add dword ptr [esi + 0x70], 1
// 00473601  c686a803000000       mov byte ptr [esi + 0x3a8], 0
// 00473608  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 0047360f  5e                   pop esi
// 00473610  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableTwoSidedLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
