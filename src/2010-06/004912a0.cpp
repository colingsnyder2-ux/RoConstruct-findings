// roc 2010-06 004912a0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004912a0
//
// 004912a0  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 004912a6  8b442404             mov eax, dword ptr [esp + 4]
// 004912aa  d918                 fstp dword ptr [eax]
// 004912ac  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 004912b2  d95804               fstp dword ptr [eax + 4]
// 004912b5  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 004912bb  d95808               fstp dword ptr [eax + 8]
// 004912be  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 004912c4  d9580c               fstp dword ptr [eax + 0xc]
// 004912c7  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getViewport@RenderDevice@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
