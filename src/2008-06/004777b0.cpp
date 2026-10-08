// roc 2008-06 004777b0  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004777b0
//
// 004777b0  56                   push esi
// 004777b1  8bf1                 mov esi, ecx
// 004777b3  ff4678               inc dword ptr [esi + 0x78]
// 004777b6  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 004777bd  741c                 je 0x4777db
// 004777bf  68500b0000           push 0xb50
// 004777c4  ff1558298000         call dword ptr [0x802958]
// 004777ca  ff4670               inc dword ptr [esi + 0x70]
// 004777cd  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 004777d4  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 004777db  5e                   pop esi
// 004777dc  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
