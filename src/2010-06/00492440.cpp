// roc 2010-06 00492440  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492440
//
// 00492440  8b442404             mov eax, dword ptr [esp + 4]
// 00492444  56                   push esi
// 00492445  50                   push eax
// 00492446  8bf1                 mov esi, ecx
// 00492448  ff15c0ab9e00         call dword ptr [0x9eabc0]
// 0049244e  ff4634               inc dword ptr [esi + 0x34]
// 00492451  5e                   pop esi
// 00492452  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
