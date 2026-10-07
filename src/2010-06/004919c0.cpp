// roc 2010-06 004919c0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004919c0
//
// 004919c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004919c4  8b542408             mov edx, dword ptr [esp + 8]
// 004919c8  56                   push esi
// 004919c9  8b742408             mov esi, dword ptr [esp + 8]
// 004919cd  50                   push eax
// 004919ce  52                   push edx
// 004919cf  56                   push esi
// 004919d0  50                   push eax
// 004919d1  52                   push edx
// 004919d2  56                   push esi
// 004919d3  e898fdffff           call 0x491770
// 004919d8  5e                   pop esi
// 004919d9  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
