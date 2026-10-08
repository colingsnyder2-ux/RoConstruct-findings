// roc 2009-06 0049e300  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e300
//
// 0049e300  56                   push esi
// 0049e301  8bf1                 mov esi, ecx
// 0049e303  57                   push edi
// 0049e304  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049e308  b801000000           mov eax, 1
// 0049e30d  014678               add dword ptr [esi + 0x78], eax
// 0049e310  39be24040000         cmp dword ptr [esi + 0x424], edi
// 0049e316  7410                 je 0x49e328
// 0049e318  014670               add dword ptr [esi + 0x70], eax
// 0049e31b  57                   push edi
// 0049e31c  ff156ceb8900         call dword ptr [0x89eb6c]
// 0049e322  89be24040000         mov dword ptr [esi + 0x424], edi
// 0049e328  5f                   pop edi
// 0049e329  5e                   pop esi
// 0049e32a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilClearValue@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
