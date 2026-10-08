// from server: 100% by auto
// roc 2010-06 00490de0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490de0
//
// 00490de0  8b09                 mov ecx, dword ptr [ecx]
// 00490de2  8b01                 mov eax, dword ptr [ecx]
// 00490de4  8b4044               mov eax, dword ptr [eax + 0x44]
// 00490de7  ffe0                 jmp eax
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?notifyResize@RenderDevice@G3D@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
