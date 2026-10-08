// roc 2010-06 004911c0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004911c0
//
// 004911c0  56                   push esi
// 004911c1  8bf1                 mov esi, ecx
// 004911c3  57                   push edi
// 004911c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004911c8  b801000000           mov eax, 1
// 004911cd  014678               add dword ptr [esi + 0x78], eax
// 004911d0  39be24040000         cmp dword ptr [esi + 0x424], edi
// 004911d6  7410                 je 0x4911e8
// 004911d8  014670               add dword ptr [esi + 0x70], eax
// 004911db  57                   push edi
// 004911dc  ff1588ab9e00         call dword ptr [0x9eab88]
// 004911e2  89be24040000         mov dword ptr [esi + 0x424], edi
// 004911e8  5f                   pop edi
// 004911e9  5e                   pop esi
// 004911ea  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilClearValue@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
