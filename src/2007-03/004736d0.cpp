// roc 2007-03 004736d0  unit: seg_00470000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004736d0
//
// 004736d0  56                   push esi
// 004736d1  8bf1                 mov esi, ecx
// 004736d3  83467801             add dword ptr [esi + 0x78], 1
// 004736d7  80bea803000000       cmp byte ptr [esi + 0x3a8], 0
// 004736de  741f                 je 0x4736ff
// 004736e0  6a00                 push 0
// 004736e2  68520b0000           push 0xb52
// 004736e7  ff15c4eb7700         call dword ptr [0x77ebc4]
// 004736ed  83467001             add dword ptr [esi + 0x70], 1
// 004736f1  c686a803000000       mov byte ptr [esi + 0x3a8], 0
// 004736f8  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 004736ff  5e                   pop esi
// 00473700  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableTwoSidedLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
