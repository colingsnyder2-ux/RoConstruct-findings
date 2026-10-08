// roc 2007-08 004739a0  unit: G3D::VARArea  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004739a0
//
// 004739a0  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 004739a6  8b442404             mov eax, dword ptr [esp + 4]
// 004739aa  d918                 fstp dword ptr [eax]
// 004739ac  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 004739b2  d95804               fstp dword ptr [eax + 4]
// 004739b5  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 004739bb  d95808               fstp dword ptr [eax + 8]
// 004739be  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 004739c4  d9580c               fstp dword ptr [eax + 0xc]
// 004739c7  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getViewport@RenderDevice@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
