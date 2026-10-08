// roc 2008-06 00476c90  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476c90
//
// 00476c90  56                   push esi
// 00476c91  8bf1                 mov esi, ecx
// 00476c93  57                   push edi
// 00476c94  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00476c98  b801000000           mov eax, 1
// 00476c9d  014678               add dword ptr [esi + 0x78], eax
// 00476ca0  39be24040000         cmp dword ptr [esi + 0x424], edi
// 00476ca6  7410                 je 0x476cb8
// 00476ca8  014670               add dword ptr [esi + 0x70], eax
// 00476cab  57                   push edi
// 00476cac  ff15a8298000         call dword ptr [0x8029a8]
// 00476cb2  89be24040000         mov dword ptr [esi + 0x424], edi
// 00476cb8  5f                   pop edi
// 00476cb9  5e                   pop esi
// 00476cba  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilClearValue@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
