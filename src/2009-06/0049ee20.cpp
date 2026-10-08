// roc 2009-06 0049ee20  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ee20
//
// 0049ee20  56                   push esi
// 0049ee21  8bf1                 mov esi, ecx
// 0049ee23  ff4678               inc dword ptr [esi + 0x78]
// 0049ee26  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 0049ee2d  741c                 je 0x49ee4b
// 0049ee2f  68500b0000           push 0xb50
// 0049ee34  ff15b8eb8900         call dword ptr [0x89ebb8]
// 0049ee3a  ff4670               inc dword ptr [esi + 0x70]
// 0049ee3d  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 0049ee44  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 0049ee4b  5e                   pop esi
// 0049ee4c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
