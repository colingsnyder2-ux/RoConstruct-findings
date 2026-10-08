// roc 2008-06 00476fc0  unit: G3D::VARArea  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476fc0
//
// 00476fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00476fc4  56                   push esi
// 00476fc5  8bf1                 mov esi, ecx
// 00476fc7  ff4678               inc dword ptr [esi + 0x78]
// 00476fca  398620040000         cmp dword ptr [esi + 0x420], eax
// 00476fd0  7416                 je 0x476fe8
// 00476fd2  50                   push eax
// 00476fd3  898620040000         mov dword ptr [esi + 0x420], eax
// 00476fd9  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 00476fdf  50                   push eax
// 00476fe0  e84bffffff           call 0x476f30
// 00476fe5  ff4678               inc dword ptr [esi + 0x78]
// 00476fe8  5e                   pop esi
// 00476fe9  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilConstant@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
