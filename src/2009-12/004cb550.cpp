// roc 2009-12 004cb550  unit: G3D::VARArea  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb550
//
// 004cb550  8b442404             mov eax, dword ptr [esp + 4]
// 004cb554  56                   push esi
// 004cb555  57                   push edi
// 004cb556  8db138080000         lea esi, [ecx + 0x838]
// 004cb55c  b910000000           mov ecx, 0x10
// 004cb561  8bf8                 mov edi, eax
// 004cb563  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cb565  5f                   pop edi
// 004cb566  5e                   pop esi
// 004cb567  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getProjectionMatrix@RenderDevice@G3D@@QBE?AVMatrix4@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
