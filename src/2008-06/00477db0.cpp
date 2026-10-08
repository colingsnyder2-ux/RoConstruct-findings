// roc 2008-06 00477db0  unit: G3D::VARArea  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477db0
//
// 00477db0  8b442404             mov eax, dword ptr [esp + 4]
// 00477db4  d900                 fld dword ptr [eax]
// 00477db6  56                   push esi
// 00477db7  8bf1                 mov esi, ecx
// 00477db9  d99eb8040000         fstp dword ptr [esi + 0x4b8]
// 00477dbf  50                   push eax
// 00477dc0  d94004               fld dword ptr [eax + 4]
// 00477dc3  d99ebc040000         fstp dword ptr [esi + 0x4bc]
// 00477dc9  d94008               fld dword ptr [eax + 8]
// 00477dcc  d99ec0040000         fstp dword ptr [esi + 0x4c0]
// 00477dd2  ff15cc298000         call dword ptr [0x8029cc]
// 00477dd8  b801000000           mov eax, 1
// 00477ddd  014678               add dword ptr [esi + 0x78], eax
// 00477de0  014670               add dword ptr [esi + 0x70], eax
// 00477de3  5e                   pop esi
// 00477de4  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setNormal@RenderDevice@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
