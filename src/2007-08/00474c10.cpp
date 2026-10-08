// roc 2007-08 00474c10  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474c10
//
// 00474c10  8b442404             mov eax, dword ptr [esp + 4]
// 00474c14  56                   push esi
// 00474c15  50                   push eax
// 00474c16  8bf1                 mov esi, ecx
// 00474c18  ff15a8ea7700         call dword ptr [0x77eaa8]
// 00474c1e  83463401             add dword ptr [esi + 0x34], 1
// 00474c22  5e                   pop esi
// 00474c23  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
