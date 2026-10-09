// roc 2009-12 004ca920  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca920
//
// 004ca920  56                   push esi
// 004ca921  8bf1                 mov esi, ecx
// 004ca923  57                   push edi
// 004ca924  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ca928  b801000000           mov eax, 1
// 004ca92d  014678               add dword ptr [esi + 0x78], eax
// 004ca930  39be24040000         cmp dword ptr [esi + 0x424], edi
// 004ca936  7410                 je 0x4ca948
// 004ca938  014670               add dword ptr [esi + 0x70], eax
// 004ca93b  57                   push edi
// 004ca93c  ff157cbb9800         call dword ptr [0x98bb7c]
// 004ca942  89be24040000         mov dword ptr [esi + 0x424], edi
// 004ca948  5f                   pop edi
// 004ca949  5e                   pop esi
// 004ca94a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilClearValue@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
