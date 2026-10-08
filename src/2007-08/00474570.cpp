// roc 2007-08 00474570  unit: G3D::VARArea  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474570
//
// 00474570  8b442404             mov eax, dword ptr [esp + 4]
// 00474574  56                   push esi
// 00474575  57                   push edi
// 00474576  8db138080000         lea esi, [ecx + 0x838]
// 0047457c  b910000000           mov ecx, 0x10
// 00474581  8bf8                 mov edi, eax
// 00474583  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00474585  5f                   pop edi
// 00474586  5e                   pop esi
// 00474587  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getProjectionMatrix@RenderDevice@G3D@@QBE?AVMatrix4@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
