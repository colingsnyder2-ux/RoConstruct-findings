// roc 2009-12 004d0c90  unit: G3D::PBVTextureFormat::?$Table  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d0c90
//
// 004d0c90  56                   push esi
// 004d0c91  8bf1                 mov esi, ecx
// 004d0c93  8d8620010000         lea eax, [esi + 0x120]
// 004d0c99  50                   push eax
// 004d0c9a  8d8e80080000         lea ecx, [esi + 0x880]
// 004d0ca0  e8cbf0ffff           call 0x4cfd70
// 004d0ca5  ff467c               inc dword ptr [esi + 0x7c]
// 004d0ca8  32c0                 xor al, al
// 004d0caa  8886bd030000         mov byte ptr [esi + 0x3bd], al
// 004d0cb0  888678080000         mov byte ptr [esi + 0x878], al
// 004d0cb6  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004d0cc0  5e                   pop esi
// 004d0cc1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?pushState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
