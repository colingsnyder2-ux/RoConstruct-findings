// roc 2007-08 00474bd0  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474bd0
//
// 00474bd0  8b442404             mov eax, dword ptr [esp + 4]
// 00474bd4  56                   push esi
// 00474bd5  50                   push eax
// 00474bd6  8bf1                 mov esi, ecx
// 00474bd8  ff15b0ea7700         call dword ptr [0x77eab0]
// 00474bde  83463401             add dword ptr [esi + 0x34], 1
// 00474be2  5e                   pop esi
// 00474be3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
