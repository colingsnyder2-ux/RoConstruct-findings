// roc 2007-03 00474cf0  unit: seg_00470000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474cf0
//
// 00474cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00474cf4  56                   push esi
// 00474cf5  50                   push eax
// 00474cf6  8bf1                 mov esi, ecx
// 00474cf8  ff1510ec7700         call dword ptr [0x77ec10]
// 00474cfe  83463401             add dword ptr [esi + 0x34], 1
// 00474d02  5e                   pop esi
// 00474d03  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
