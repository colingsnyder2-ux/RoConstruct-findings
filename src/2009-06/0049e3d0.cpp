// roc 2009-06 0049e3d0  unit: G3D::VARArea  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e3d0
//
// 0049e3d0  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 0049e3d6  8b442404             mov eax, dword ptr [esp + 4]
// 0049e3da  d918                 fstp dword ptr [eax]
// 0049e3dc  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 0049e3e2  d95804               fstp dword ptr [eax + 4]
// 0049e3e5  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 0049e3eb  d95808               fstp dword ptr [eax + 8]
// 0049e3ee  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 0049e3f4  d9580c               fstp dword ptr [eax + 0xc]
// 0049e3f7  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getViewport@RenderDevice@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
