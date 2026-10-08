// roc 2010-06 00492420  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492420
//
// 00492420  8b442404             mov eax, dword ptr [esp + 4]
// 00492424  56                   push esi
// 00492425  50                   push eax
// 00492426  8bf1                 mov esi, ecx
// 00492428  ff15bcab9e00         call dword ptr [0x9eabbc]
// 0049242e  ff4634               inc dword ptr [esi + 0x34]
// 00492431  5e                   pop esi
// 00492432  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
