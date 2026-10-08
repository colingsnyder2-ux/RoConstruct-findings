// roc 2009-06 0049e630  unit: G3D::VARArea  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e630
//
// 0049e630  8b442404             mov eax, dword ptr [esp + 4]
// 0049e634  56                   push esi
// 0049e635  8bf1                 mov esi, ecx
// 0049e637  ff4678               inc dword ptr [esi + 0x78]
// 0049e63a  398620040000         cmp dword ptr [esi + 0x420], eax
// 0049e640  7416                 je 0x49e658
// 0049e642  50                   push eax
// 0049e643  898620040000         mov dword ptr [esi + 0x420], eax
// 0049e649  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 0049e64f  50                   push eax
// 0049e650  e84bffffff           call 0x49e5a0
// 0049e655  ff4678               inc dword ptr [esi + 0x78]
// 0049e658  5e                   pop esi
// 0049e659  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilConstant@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
