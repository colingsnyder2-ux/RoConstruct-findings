// roc 2007-03 004745b0  unit: seg_00470000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004745b0
//
// 004745b0  56                   push esi
// 004745b1  8bf1                 mov esi, ecx
// 004745b3  83467801             add dword ptr [esi + 0x78], 1
// 004745b7  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 004745be  741d                 je 0x4745dd
// 004745c0  68500b0000           push 0xb50
// 004745c5  ff1574eb7700         call dword ptr [0x77eb74]
// 004745cb  83467001             add dword ptr [esi + 0x70], 1
// 004745cf  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 004745d6  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 004745dd  5e                   pop esi
// 004745de  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
