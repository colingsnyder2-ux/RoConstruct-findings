// roc 2009-12 004caa00  unit: G3D::VARArea  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004caa00
//
// 004caa00  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 004caa06  8b442404             mov eax, dword ptr [esp + 4]
// 004caa0a  d918                 fstp dword ptr [eax]
// 004caa0c  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 004caa12  d95804               fstp dword ptr [eax + 4]
// 004caa15  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 004caa1b  d95808               fstp dword ptr [eax + 8]
// 004caa1e  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 004caa24  d9580c               fstp dword ptr [eax + 0xc]
// 004caa27  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getViewport@RenderDevice@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
