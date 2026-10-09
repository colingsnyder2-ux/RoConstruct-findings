// roc 2009-12 004cb490  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb490
//
// 004cb490  56                   push esi
// 004cb491  8bf1                 mov esi, ecx
// 004cb493  ff4678               inc dword ptr [esi + 0x78]
// 004cb496  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 004cb49d  741c                 je 0x4cb4bb
// 004cb49f  68500b0000           push 0xb50
// 004cb4a4  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004cb4aa  ff4670               inc dword ptr [esi + 0x70]
// 004cb4ad  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 004cb4b4  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 004cb4bb  5e                   pop esi
// 004cb4bc  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
