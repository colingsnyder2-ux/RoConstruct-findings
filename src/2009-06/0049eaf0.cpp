// roc 2009-06 0049eaf0  unit: G3D::VARArea  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049eaf0
//
// 0049eaf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049eaf4  8b542408             mov edx, dword ptr [esp + 8]
// 0049eaf8  56                   push esi
// 0049eaf9  8b742408             mov esi, dword ptr [esp + 8]
// 0049eafd  50                   push eax
// 0049eafe  52                   push edx
// 0049eaff  56                   push esi
// 0049eb00  50                   push eax
// 0049eb01  52                   push edx
// 0049eb02  56                   push esi
// 0049eb03  e898fdffff           call 0x49e8a0
// 0049eb08  5e                   pop esi
// 0049eb09  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
