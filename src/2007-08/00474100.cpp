// from server: 100% by auto
// roc 2007-08 00474100  unit: G3D::VARArea  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474100
//
// 00474100  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00474104  8b542408             mov edx, dword ptr [esp + 8]
// 00474108  56                   push esi
// 00474109  8b742408             mov esi, dword ptr [esp + 8]
// 0047410d  50                   push eax
// 0047410e  52                   push edx
// 0047410f  56                   push esi
// 00474110  50                   push eax
// 00474111  52                   push edx
// 00474112  56                   push esi
// 00474113  e898fdffff           call 0x473eb0
// 00474118  5e                   pop esi
// 00474119  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
