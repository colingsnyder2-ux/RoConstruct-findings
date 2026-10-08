// roc 2009-06 0049eee0  unit: G3D::VARArea  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049eee0
//
// 0049eee0  8b442404             mov eax, dword ptr [esp + 4]
// 0049eee4  56                   push esi
// 0049eee5  57                   push edi
// 0049eee6  8db138080000         lea esi, [ecx + 0x838]
// 0049eeec  b910000000           mov ecx, 0x10
// 0049eef1  8bf8                 mov edi, eax
// 0049eef3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049eef5  5f                   pop edi
// 0049eef6  5e                   pop esi
// 0049eef7  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getProjectionMatrix@RenderDevice@G3D@@QBE?AVMatrix4@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
