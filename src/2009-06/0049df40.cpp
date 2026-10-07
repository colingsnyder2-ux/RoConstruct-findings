// roc 2009-06 0049df40  unit: G3D::VARArea  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049df40
//
// 0049df40  8b09                 mov ecx, dword ptr [ecx]
// 0049df42  8b01                 mov eax, dword ptr [ecx]
// 0049df44  8b4044               mov eax, dword ptr [eax + 0x44]
// 0049df47  ffe0                 jmp eax
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?notifyResize@RenderDevice@G3D@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
