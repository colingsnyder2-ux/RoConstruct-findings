// roc 2008-06 00476d60  unit: G3D::VARArea  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476d60
//
// 00476d60  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 00476d66  8b442404             mov eax, dword ptr [esp + 4]
// 00476d6a  d918                 fstp dword ptr [eax]
// 00476d6c  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 00476d72  d95804               fstp dword ptr [eax + 4]
// 00476d75  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 00476d7b  d95808               fstp dword ptr [eax + 8]
// 00476d7e  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 00476d84  d9580c               fstp dword ptr [eax + 0xc]
// 00476d87  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getViewport@RenderDevice@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
