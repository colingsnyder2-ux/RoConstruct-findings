// roc 2007-08 00473400  unit: G3D::VARArea  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473400
//
// 00473400  8b09                 mov ecx, dword ptr [ecx]
// 00473402  8b01                 mov eax, dword ptr [ecx]
// 00473404  8b4028               mov eax, dword ptr [eax + 0x28]
// 00473407  ffe0                 jmp eax
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setCaption@RenderDevice@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
