// roc 2009-12 004cbba0  unit: G3D::VARArea  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbba0
//
// 004cbba0  8b442404             mov eax, dword ptr [esp + 4]
// 004cbba4  56                   push esi
// 004cbba5  50                   push eax
// 004cbba6  8bf1                 mov esi, ecx
// 004cbba8  ff15c4ba9800         call dword ptr [0x98bac4]
// 004cbbae  ff4634               inc dword ptr [esi + 0x34]
// 004cbbb1  5e                   pop esi
// 004cbbb2  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
