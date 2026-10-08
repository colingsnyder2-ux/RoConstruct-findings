// roc 2009-12 004cb120  unit: G3D::VARArea  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb120
//
// 004cb120  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cb124  8b542408             mov edx, dword ptr [esp + 8]
// 004cb128  56                   push esi
// 004cb129  8b742408             mov esi, dword ptr [esp + 8]
// 004cb12d  50                   push eax
// 004cb12e  52                   push edx
// 004cb12f  56                   push esi
// 004cb130  50                   push eax
// 004cb131  52                   push edx
// 004cb132  56                   push esi
// 004cb133  e898fdffff           call 0x4caed0
// 004cb138  5e                   pop esi
// 004cb139  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
