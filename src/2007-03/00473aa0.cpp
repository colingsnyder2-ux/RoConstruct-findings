// roc 2007-03 00473aa0  unit: seg_00470000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473aa0
//
// 00473aa0  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 00473aa6  8b442404             mov eax, dword ptr [esp + 4]
// 00473aaa  d918                 fstp dword ptr [eax]
// 00473aac  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 00473ab2  d95804               fstp dword ptr [eax + 4]
// 00473ab5  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 00473abb  d95808               fstp dword ptr [eax + 8]
// 00473abe  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 00473ac4  d9580c               fstp dword ptr [eax + 0xc]
// 00473ac7  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getViewport@RenderDevice@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
