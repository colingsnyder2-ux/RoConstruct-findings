// roc 2009-12 004cba90  unit: G3D::VARArea  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cba90
//
// 004cba90  8b442404             mov eax, dword ptr [esp + 4]
// 004cba94  d900                 fld dword ptr [eax]
// 004cba96  56                   push esi
// 004cba97  8bf1                 mov esi, ecx
// 004cba99  d99eb8040000         fstp dword ptr [esi + 0x4b8]
// 004cba9f  50                   push eax
// 004cbaa0  d94004               fld dword ptr [eax + 4]
// 004cbaa3  d99ebc040000         fstp dword ptr [esi + 0x4bc]
// 004cbaa9  d94008               fld dword ptr [eax + 8]
// 004cbaac  d99ec0040000         fstp dword ptr [esi + 0x4c0]
// 004cbab2  ff15bcba9800         call dword ptr [0x98babc]
// 004cbab8  b801000000           mov eax, 1
// 004cbabd  014678               add dword ptr [esi + 0x78], eax
// 004cbac0  014670               add dword ptr [esi + 0x70], eax
// 004cbac3  5e                   pop esi
// 004cbac4  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setNormal@RenderDevice@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
