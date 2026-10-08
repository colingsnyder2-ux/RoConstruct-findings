// roc 2009-06 004a41c0  unit: G3D::PBVTextureFormat::?$Table  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a41c0
//
// 004a41c0  56                   push esi
// 004a41c1  8bf1                 mov esi, ecx
// 004a41c3  8d8620010000         lea eax, [esi + 0x120]
// 004a41c9  50                   push eax
// 004a41ca  8d8e80080000         lea ecx, [esi + 0x880]
// 004a41d0  e8cbf0ffff           call 0x4a32a0
// 004a41d5  ff467c               inc dword ptr [esi + 0x7c]
// 004a41d8  32c0                 xor al, al
// 004a41da  8886bd030000         mov byte ptr [esi + 0x3bd], al
// 004a41e0  888678080000         mov byte ptr [esi + 0x878], al
// 004a41e6  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004a41f0  5e                   pop esi
// 004a41f1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?pushState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
