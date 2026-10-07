// roc 2008-06 004768d0  unit: G3D::VARArea  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004768d0
//
// 004768d0  8b09                 mov ecx, dword ptr [ecx]
// 004768d2  8b01                 mov eax, dword ptr [ecx]
// 004768d4  8b4044               mov eax, dword ptr [eax + 0x44]
// 004768d7  ffe0                 jmp eax
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?notifyResize@RenderDevice@G3D@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
