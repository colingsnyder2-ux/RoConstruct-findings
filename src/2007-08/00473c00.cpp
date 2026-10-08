// roc 2007-08 00473c00  unit: G3D::VARArea  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473c00
//
// 00473c00  8b442404             mov eax, dword ptr [esp + 4]
// 00473c04  56                   push esi
// 00473c05  8bf1                 mov esi, ecx
// 00473c07  83467801             add dword ptr [esi + 0x78], 1
// 00473c0b  398620040000         cmp dword ptr [esi + 0x420], eax
// 00473c11  7417                 je 0x473c2a
// 00473c13  50                   push eax
// 00473c14  898620040000         mov dword ptr [esi + 0x420], eax
// 00473c1a  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 00473c20  50                   push eax
// 00473c21  e84affffff           call 0x473b70
// 00473c26  83467801             add dword ptr [esi + 0x78], 1
// 00473c2a  5e                   pop esi
// 00473c2b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilConstant@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
