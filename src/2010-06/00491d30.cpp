// roc 2010-06 00491d30  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491d30
//
// 00491d30  56                   push esi
// 00491d31  8bf1                 mov esi, ecx
// 00491d33  ff4678               inc dword ptr [esi + 0x78]
// 00491d36  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 00491d3d  741c                 je 0x491d5b
// 00491d3f  68500b0000           push 0xb50
// 00491d44  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 00491d4a  ff4670               inc dword ptr [esi + 0x70]
// 00491d4d  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 00491d54  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00491d5b  5e                   pop esi
// 00491d5c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
