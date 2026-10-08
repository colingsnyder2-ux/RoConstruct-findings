// roc 2007-08 004744b0  unit: G3D::VARArea  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004744b0
//
// 004744b0  56                   push esi
// 004744b1  8bf1                 mov esi, ecx
// 004744b3  83467801             add dword ptr [esi + 0x78], 1
// 004744b7  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 004744be  741d                 je 0x4744dd
// 004744c0  68500b0000           push 0xb50
// 004744c5  ff154ceb7700         call dword ptr [0x77eb4c]
// 004744cb  83467001             add dword ptr [esi + 0x70], 1
// 004744cf  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 004744d6  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 004744dd  5e                   pop esi
// 004744de  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
