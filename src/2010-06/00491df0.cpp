// roc 2010-06 00491df0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491df0
//
// 00491df0  8b442404             mov eax, dword ptr [esp + 4]
// 00491df4  56                   push esi
// 00491df5  57                   push edi
// 00491df6  8db138080000         lea esi, [ecx + 0x838]
// 00491dfc  b910000000           mov ecx, 0x10
// 00491e01  8bf8                 mov edi, eax
// 00491e03  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00491e05  5f                   pop edi
// 00491e06  5e                   pop esi
// 00491e07  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getProjectionMatrix@RenderDevice@G3D@@QBE?AVMatrix4@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
